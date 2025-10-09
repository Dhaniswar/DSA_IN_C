#include<stdio.h>

/*
//There are 4 types of fuction
1). No argument without return types
2). No argument with return types
3). With argument no return types
4). With argument with return types




*/


void swap(int*, int*); //this is called function declration, and inside brackets are called formal parameter


void main() {

    int x=5; 
    int y=7;

    swap(&x,&y); //this is called (called function) and inside bracket is called argument(real parameter)
    printf("value of x=%d, and y=%d\n", x, y);
    
}




void swap(int *ptr1, int *ptr2) // this is called function defination and inside it  are called formal parameter
{

    *ptr1=7;
    *ptr2=5;
    printf("value of ptr1=%d, and ptr2=%d\n", *ptr1, *ptr2);
}


