#include<stdio.h>
#include<stdlib.h>

/*
Implementation of Queue using static memory allocation(Array)
*/

#define N 5

int queue[N];

int front = -1;
int rear = -1;


void enqueue(){

    int a;
    printf("Enter the number:\n");
    scanf("%d", &a);

    if(rear>N-1){
        printf("Overflow condition occurs!\n");
    }
    
    else if(rear!=-1 && front==-1){

        front=rear=0;
        queue[rear]=a;

    }

    else{

        rear++;
        queue[rear]=a;

    }

}


void dequeue(){

    if(rear==-1 && front==-1){
        printf("Underflow condition occurs!\n");
    }

    else if(front==rear){
        front=rear=-1;
    }

    else{
        printf("the dequeue element is %d", queue[front]);
        front++;
    }

}



void feek(){

    if(front==-1 && rear==-1){
        printf("Empty Queue!");
    }

    else{
    printf("element of the queue is: %d",queue[front]);

    }

}


void display() {

    if(front==-1 && rear==-1){
        printf("Empty Queue!");
    }

    else{
        while(front!=rear){
            printf("element of the queue is: %d",queue[rear]);
            front++; 
        }
    }
    
}






void main() {
    int choice;
    printf("Enter the number choice(1: enqueue(), 2:dequeue(), 3:display(), 4:peek())\n");
    scanf("%d",&choice);

    switch(choice){

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
        default:
            printf("Pleae enter the valid choice\n");
            break;

    }

}