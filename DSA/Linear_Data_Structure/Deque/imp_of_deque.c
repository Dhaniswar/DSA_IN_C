#include<stdio.h>
#include<stdlib.h>

/*
Implementation of Deque using circular Array
=> while we enqueue from front we do front--
=> while we dequeue from rear we do rear--


*/

#define N 5
int front = -1, rear= -1;
int deque[N];



void enqueue_at_front(){
    int a;
    printf("Enqueue data at front: \n");
    scanf("%d", &a);

    if((rear+1)%N==front){
        printf("Overflow condition occurs!\n");
        return;
    }

    else if(rear==-1 && front==-1){
        front=rear=0;
        deque[front] = a;

    }

    else if(front==0){
        front=N-1;
        deque[front]=a;
    }

    else{
        front--;
        deque[front] = a;


    }


}


void enqueue_at_rear() {
    int a;
    printf("Enqueue data at front: \n");
    scanf("%d", &a);

    if((front==0 && rear==N-1) || (front==rear+1)){
        printf("Overflow condition occurs!\n");
        return;
    }

    else if(rear==-1 && front==-1){
        front=rear=0;
        deque[rear] = a;

    }

    else if(rear==N-1){
        rear=0;
        deque[rear] = a;

    }

    else{
        rear++;
        deque[rear]=a;
    }

}

void dequeue_from_front() {
    if(front==-1&& rear==-1){
        printf("Underflow condition occurs!\n");
        return;

    }
    else if(front==rear){
        front=rear=-1;
    }
    else if(front==N-1){
        front=0;
        
    }

    else{
        printf("dequeuing value is : %d\n", deque[front]);
        front++;
    }

}


void dequeue_from_rear(){
    if(front==-1&& rear==-1){
        printf("Underflow condition occurs!\n");
        return;

    }
    else if(front==rear){
        front=rear=-1;
    }
    else if(rear==0){
        printf("dequeuing value is : %d\n", deque[rear]);
        rear=N-1;
    }
    else{
        printf("dequeuing value is : %d\n", deque[rear]);
        rear--;
    }

}


void get_front(){
    if(front==-1&& rear==-1){
        printf("Empty Deque!\n");
        return;

    }
    else{
        printf("front value is : %d\n", deque[front]);
    }

}


void get_rear(){
    if(front==-1&& rear==-1){
        printf("Empty Deque!\n");
        return;

    }
    else{
        printf("rear value is : %d\n", deque[rear]);
    }

}


void display() {
    int i=front;
    if(front==-1&& rear==-1){
        printf("Empty Deque!\n");
        return;

    }

    while(i!=rear){
        printf("%d\n",deque[i]);
        i=(i+1)%N;
    }
    printf("%d\n",deque[rear]);

     
}



void main(){
    int ch;

    do{
    printf("Enter choice(1:enqueue_at_front(), 2:enqueue_at_rear(), 3:dequeue_from_front(), 4:dequeue_from_rear(), 5:get_front(), 6:get_rear(), 7:display() and 0:exit())\n");
    scanf("%d", &ch);
    switch(ch){
        case 1:
            enqueue_at_front();
            break;
        case 2:
            enqueue_at_rear();
            break;
        case 3:
            dequeue_from_front();
            break;
        case 4:
            dequeue_from_rear();
            break;
        case 5:
            get_front();
            break;
        case 6:
            get_rear();
            break;
        case 7:
            display();
            break;
        case 0:
            break;
        default:
            printf("Please enter valid choice\n");
    }

    }while(ch !=0);
}