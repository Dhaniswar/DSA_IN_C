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


void dequeue(){

    struct queue *temp;
    if(front==NULL && rear==NULL){
        printf("Underflow condition occurs!\n");
        return;
    }

    else if(front->next==rear->next){
        printf("dequeuing elemnt from the queue is data=%d, and next=%p\n", front->data, front->next);
        front=rear=NULL;
    }

    else{
        temp=front;
        printf("dequeuing elemnt from the queue is data=%d, and next=%p\n", front->data, front->next);
        front= front->next;
        rear->next = front;

        free(temp);

    }

}







int main(){
    int ch;

    do{
    printf("Enter choice(1:enqueue(), 2:dequeue(), 0:exit())\n");
    scanf("%d", &ch);
    switch(ch){
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 0:
            break;
        default:
            printf("Please enter valid choice\n");
    }

    }while(ch !=0);
    
}