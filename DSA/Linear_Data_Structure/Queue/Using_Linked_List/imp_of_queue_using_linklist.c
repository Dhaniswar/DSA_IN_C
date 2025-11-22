#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Implementation of queue using linked list
*/

struct queue {
    int data;
    struct queue *next;
};

struct queue *front=NULL;
struct queue *rear=NULL;

void enqueue(){

    struct queue  *newnode=NULL;
    char choice[30];

    newnode = (struct queue*)malloc(sizeof(struct queue));

    if(newnode==NULL){
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enqueue data in queue: \n");
    scanf("%d", &newnode->data);
    newnode->next=NULL;

    if(front==NULL && rear==NULL){
        front=rear=newnode;
    }

    else{
        rear->next = newnode;
        rear = newnode;
    }

    }








void to_free(){

    struct queue *temp;

    while(front !=NULL){
        temp = front;
        front = front->next;
        free(temp);
    }

}






int main() {

    int choice;

    do
    {
        printf("Enter the choice(1: enqueue(), 2:dequeue(), 3:display(), 4:peek())\n");
        scanf("%d", &choice);

        switch (choice){
        case 1:
            enqueue();
            break;
        case 0:
            break;

        default:
            printf("Pleae enter the valid choice\n");
        }

    } while (choice != 0);

    to_free();

}

