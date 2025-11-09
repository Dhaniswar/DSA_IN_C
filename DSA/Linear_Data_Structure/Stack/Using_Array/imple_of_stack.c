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
        printf("Top most data in the stack is: %d", data);
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


void display(){
    int i;
    
    if(top == -1){
        printf("Under flow condition!\n");
    }
    else{
        printf("Displaying stack data from top to buttom!\n");
        for(i=top; i>=0; i--){
            printf("%d\n", stack[i]);
        }
    }
}



int main(){

    int ch;
    do{
        printf("Enter choice(1:Push, 2:Pop, 3:peek, 4: display)\n");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peak();
                break;
            case 4:
                display();
                break;
            default:
            printf("Invalid choice\n");
        }
    }while(ch !=0);


    return 0;
}