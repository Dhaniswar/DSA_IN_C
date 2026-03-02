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
        rear->next=front;
    }
    else{
        rear->next= newnode;
        newnode->next= front;
        rear = newnode;
    }

}


void dequeue(){

    struct queue *temp;
    if(front==NULL && rear==NULL){
        printf("Underflow condition occurs!\n");
        return;
    }

    else if(front==rear){
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


void peek(){

    
    if(front==NULL && rear==NULL){
        printf("Empty Queue!\n");
        return;
    }

    else{
        printf("Front element of the queue is data=%d, and next=%p\n", front->data, front->next);
    }
}



void display(){
    struct queue *temp;
    if(front==NULL && rear==NULL){
        printf("Emplty Queue!\n");
        return;
    }

    else{
        temp=front;

        do{
        printf("elemnt in the queue is data=%d, and next=%p\n", temp->data, temp->next);
        temp=temp->next;

        }
        while(temp != rear->next);

    }
}

void free_queue(){
    struct queue *temp;

    if(front==NULL){
        return;
    }
    
    rear->next= NULL;

    while(front !=NULL){
        temp=front;
        front=front->next;
        free(temp);
    }

    rear= NULL;

}



int main(){
    int ch;

    do{
    printf("Enter choice(1:enqueue(), 2:dequeue(), 3:peek(), 4:display(), and 0:exit())\n");
    scanf("%d", &ch);
    switch(ch){
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
        case 0:
            break;
        default:
            printf("Please enter valid choice\n");
    }

    }while(ch !=0);

    free_queue();
    
}