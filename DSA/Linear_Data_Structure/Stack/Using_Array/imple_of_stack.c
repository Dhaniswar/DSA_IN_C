#include<stdio.h>
#include<stdlib.h>



/*
Implementation of Stack, using static memory allocation(that is Array)

*/

#define N 5

int stack[N];

int top = -1;




void push(){
    int data;
    printf("Enter data you want to push in the stack: \n");
    scanf("%d", &data);

    if(top == N - 1){
        printf("Overflow condition!\n");
    }

    else{
        top++;
        stack[top] = data;
    }
}



void pop() {

    int data;

    if(top == -1){
        printf("Under flow condition!\n");
    }

    else{
        data = stack[top];
        top--;
        printf("Pop data from the stack is %d", data);
    }
}


void peak(){
    int data;

    if(top == -1){
        printf("Under flow condition!\n");
    }
    else{
        data = stack[top];
        printf("Top most data in the stack is %d: ", data);

    }

}


void dispaly(){
    int i;
    
    if(top == -1){
        printf("Under flow condition!\n");
    }
    else{
        printf("Displaying stack data from top to buttom!\n");
        while(top != -1){
            printf("%d\n", stack[top]);
            top--;
        }
    }
}



int main(){

    int stack[5];
    int i;

    for(i=0; i<N; i++){
        push();
    }
    dispaly();


    return 0;
}