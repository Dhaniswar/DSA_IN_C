#include<stdio.h>
#include<stdlib.h>

/*
#wild pointer

i). if your machine is 32 bits then the memory would be of 2^32 (you have 2^32 bits)
ii). you shoud initialize the pointer
iii). Or you can declare pointer as dynamic memory allocation

*/


void main() {



    // int *ptr; // it is uninitialized pointer => there would be some garbage value, that means if the pointer is uninitialized that will acts as wild pointer

    int* ptr=NULL;
    int x=5;

    ptr = &x;


    printf("%d\n", *ptr); 

    


}