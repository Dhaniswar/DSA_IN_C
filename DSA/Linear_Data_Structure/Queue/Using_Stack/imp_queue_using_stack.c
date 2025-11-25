#include<stdio.h>
#include<stdlib.h>

/*
Implementation of Queue using Stack
#Rules
1. You have to use to stack to implement a queue using stack
2. At first pop all the element from the first stack and push that element to second stack
3. And finally pop the element from second stack to perform enqueue operation
4. Basically we perform enqueue() operation from first stack and dequeue() operation from second stack
5. After performing pop operation from second stack you have to pop all the element from that stac and push into first stack
6. And if you have to perform enqueue() operation then just push the element into first stack

#Note=> We can also implement queue with 1 stack using recurrsion call
but in lesson we are going to implement stack using 2 stack.
#There are two method to implement queue using stack
*First Method
a. enqueue() = O(1)
b. dequeue() = O(n)
*Second Method
a. enqueue() = O(n)
 b. dequeue() = O(1)
*/ 

#define N 5
int stack1[N], stack2[N];
int top1=-1, top2=-1, count=0;


void push1(int data){
    if(top1==N-1){
        printf("Overflow condition occurs");
        return;

    }
    else{
        top1++;
        stack1[top1] = data;
    }


}

void push2(int data){
    if(top2==N-1){
        printf("Overflow condition occurs");
        return;

    }
    else{
        top2++;
        stack2[top2] = data;
    }


}

int pop1(){

    if(top1==-1){
        printf("Underflow condition!\n");
        return -1;

    }
    else{
        return stack1[top1--];
    }

}


int pop2(){

    if(top2==-1){
        printf("Underflow condition!\n");
    }
    else{
        return stack2[top2--];
    }

}



void enqueue(){
    int a;
    printf("Enqueue data into queue\n");
    scanf("%d", &a);
    push1(a);
    count++;
}


void dequeue(){
    int a,b,i;

    if(top1==-1 && top2==-1){
        printf("Underflow condition occurs\n");
        return;
    }

    else{
        for(i=0; i<count; i++){
            a=pop1();
            push2(a);
        }

        b=pop2();
        printf("Dequing element is %d\n", b);
        count--;

        for(i=0; i<count; i++){
            a=pop2();
            push1(a);
        }


    }

}


void peek(){
    int i;
    if(top1==-1){
        printf("Empty Queue!\n");
        return;
    }

    else{

            printf("front element is %d\n", stack1[0]);


    }
}



void display(){
    int i;
    if(top1==-1){
        printf("Empty Queue!\n");
        return;
    }

    else{
        for(i=0; i<=top1; i++){
            printf("Queue element is %d\n", stack1[i]);
        }

    }
}




int main(){
    int choice;
    do{
    printf("Enter the choice(0:exit(), 1:enqueue(), 2:dequeue(), 3:display, 4:peek())\n");
    scanf("%d", &choice);

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
        case 0:
            break;
        default:
            printf("please enter the valid choice!\n");
    }

    }
    while(choice!=0);

    return 0;



}

