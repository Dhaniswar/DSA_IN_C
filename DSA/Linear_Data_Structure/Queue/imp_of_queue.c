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
        printf("Overflow condition occurs!");
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

}


void feek(){

}


void display() {
    
}






void main() {

}