#include<stdio.h>

/*
How to return pointer from function

*/


int *returnPointer(int[]);



void main() {

int *p;
int a[]={1,2,3,4,5};
// here we can not do a=a+2, because a is constant array we cannot change the base address of array
p = returnPointer(a);
printf("%d\n", *p);
    
}


int *returnPointer(int a[]){

    a = a+2; // but we can do here, cause here a[] is not array iit acts as pointer
    return a;
}






