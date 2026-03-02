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




void dequeue(){
    
    struct queue  *temp=NULL;


    if(front==NULL){
        printf("Underflow condition occurs!\n");
        return;
    }

    else{
        temp=front;
        front=front->next;
        printf("dequing element is data=%d, and next=%p \n", temp->data, temp->next);
        free(temp);
    }

    if(front==NULL){
        rear=NULL;
    }
}



void peek(){

    if(front==NULL){
        printf("Empty Queue!\n");
    }

    else{
        printf("front data=%d, and next=%p\n", front->data, front->next);
    }

}


void display(){


    struct queue * temp;

    if(front==NULL){
        printf("Empty Queue!\n");
        return;
    }

    else{
        temp = front;
        while(temp !=NULL){
        printf("Node in the queue is data=%d, and next=%p\n", temp->data, temp->next);
        temp = temp->next;

        }
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
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 0:
            break;

        default:
            printf("Pleae enter the valid choice\n");
        }

    } while (choice != 0);

    to_free();

}

