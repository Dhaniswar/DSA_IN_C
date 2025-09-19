#include<stdio.h>
#include<stdlib.h>


/*
1. Pointer to pointer (Double Pointer)
=> It is special types of pointer or variable which is going to store the address of another poiter variable


*/

void main() {

    int a=10;

    int *p;

    p=&a;

    int **q;

    q=&p;

    // printf("Value of a=%d, p=%d, and q=%d\n", a, *p, **q);

    // printf("Value of a=%d, p=%d, and q=%d\n", a, *p, *(*q));


    // Even we can intialize 3 level pointer, which can store address of 2 level pointer

    int ***r;

    r = &q;

    *p=50; // it will change the base value a to 78

    **q= 250; // it will change the base value a to 250

    ***r=63; // it will change the base value  a to 63



    // printf("Value of x=%d\n", ***x);
    printf("Value of r=%d\n", *(*(*r)));

    printf("Value of a=%d\n", a);


    // it is good practice to access value of double and triple pointer using bracket 

 
   




}