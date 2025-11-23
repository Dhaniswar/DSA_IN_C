#include<stdio.h>
#include<stdlib.h>

/*
Implementation of circular queue using linked list
*/

struct queue {
    int data;
    struct queue *next;
};

struct queue *front=NULL, *rear=NULL;

void enqueue(){
    struct queue *newnode=NULL;

    newnode=(struct queue*)malloc(sizeof(struct queue));

    if(!newnode){
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enqueue data in the queue\n");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if(front==NULL){
        front=rear=newnode;
        rear->next=newnode;
    }
    else{
        rear->next= newnode;
        newnode->next= rear;
        rear = newnode;
    }

}







int main(){
    int ch;

    do{
    printf("Enter choice(1:enqueue(), 0:exit())\n");
    scanf("%d", &ch);
    switch(ch){
        case 1:
            enqueue();
            break;
        case 0:
            break;
        default:
            printf("Please enter valid choice\n");
    }

    }while(ch !=0);
    
}