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



void enqueue(struct queue **front, struct queue **rear){

    struct queue  *newnode=NULL;
    char choice[30];

    newnode = (struct queue*)malloc(sizeof(struct queue));

    if(newnode==NULL){
        printf("Memory allocation failed!\n");
    }

    printf("Enqueue data in queue: \n");
    scanf("%d", &newnode->data);
    newnode -> next=NULL;

    if(*front==NULL && (*rear)==NULL){
        *front=*rear=newnode;
    }

    else{
        (*rear)->next = newnode;
        *rear = newnode;
    }

    }




void dequeue(struct queue **front, struct queue **rear){
    
    struct queue  *temp=NULL;


    if(*front==NULL){
        printf("Underflow condition occurs!\n");
        *rear=NULL;
    }

    else{
        temp=*front;
        *front=(*front)->next;
        free(temp);
    }
}

void peek(struct queue *front){

    if(front==NULL){
        printf("Empty Queue!\n");
    }

    else{
        printf("very first node in the queue is data=%d, and next=%p\n", front->data, front->next);
    }

}


void display(struct queue *front){


    struct queue * temp;

    if(front==NULL){
        printf("Empty Queue!\n");
    }

    else{
        temp = front;
        while(temp !=NULL){
        printf("very first node in the queue is data=%d, and next=%p\n", temp->data, temp->next);
        temp = temp->next;

        }
    }
}



void to_free(struct queue *front){

    struct queue *temp;

    while(front !=NULL){
        temp = front;
        front = front->next;
        free(temp);
    }

}






int main() {
    struct queue *front = NULL;
    struct queue *rear = NULL;
    int choice;

    do
    {
        printf("Enter the choice(1: enqueue(), 2:dequeue(), 3:display(), 4:peek())\n");
        scanf("%d", &choice);

        switch (choice){
        case 1:
            enqueue(&front, &rear);
            break;
        case 2:
            dequeue(&front, &rear);
            break;
        case 3:
            display(front);
            break;
        case 4:
            peek(front);
            break;

        default:
            printf("Pleae enter the valid choice\n");
        }

    } while (choice != 0);

    to_free(front);

}

