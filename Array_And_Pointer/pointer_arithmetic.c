#include<stdio.h>
#include<stdlib.h>



/*
Pointer Arithmetic (Subtraction)
1. We can not add two pointer but we can add pointer to integers
2. Yes we can substract 2 pointer variable and also interger value from pointer variable
3. Not only can we subtract 2 pointer variable, but we also can substract integer from pointer variable.

4. We can substract pointer variable and, in addition, can substract integer from pointer variable.


*/



void main() {


     /*
    p-q is possible //you will get integer value
    q-p is possiple // you will get integer value
    p + q is not possible

    p-2 is possible // result in pointer form
    p+2 is also possible // // result in pointer form

    */


    int d;
    int a[] = {0,1,-1,10,11};

    int *p = &a[0];

    int *q =&a[3];

    d = q-p;

    printf("differnce of two pointer: %d\n", d);


    *q=25;

    d = q-p; // ( difference/size) of data types

    printf("differnce of two pointer: %d\n", d);

    *p =27;

    printf("differnce of two pointer: %d\n", *p);

    q = q-3;

    printf("differnce of two pointer: %p\n", q);


    p = p +3;

    d = p - q;











}