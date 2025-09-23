#include<stdio.h>
#include<stdlib.h>

/*
#void pointer
i. is not having any associate data types, so you can convert this pointer to any other data types
ii. void pointer can hold address of any data types variables, for this we neet to type caste you can not dereferencw directly


    int *ip;
    float *fp;
    char *cp;

    void *vp;

    int a;
    float b;
    char c;

    ip =&a;
    fp = &b;
    cp = &c;

    iii. Note malloc() and calloc() are pre-defined function that are use for dynamic memory allocation. And both return void pointer


*/

void main() {

    int a =5;
    float b=4.5;
    char c ='0';

    void *vptr;

    vptr = &a;

    printf("%d\n", *(int*)vptr); 

    vptr = &c;

    printf("%c\n", *(char*)vptr); 

    vptr = &b;

    printf("%c\n", *(float*)vptr); 


}