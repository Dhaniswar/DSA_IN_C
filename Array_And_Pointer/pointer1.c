/*

int a =20;
int *p; 

p = &a;


1. Array name always contains the base addresss of Array

int m[5] = {10,20,30,40,50};

int *q;

q = m;
*/

#include<stdio.h>



void main() {

    int b = 10;

    int *p;

    p = &b;

    printf("the value of b is: %d \n", b);

    printf("the value of b using pointer is: %d \n", *p);

    printf("Address of b is: %p \n", &b);

    printf("Value of pointer p holding is: %p \n", p);

    

}