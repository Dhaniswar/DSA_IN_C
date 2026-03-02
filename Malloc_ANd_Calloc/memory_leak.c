#include<stdio.h>
#include<stdlib.h>

/*
1. Memory Leak in c which is happen improper use of Heap section of the memory or improper use of dynamic memory allocation

*/

void main() {

    int chooice=1;

    int *ptr;


    while(chooice<50){

        printf("Memory leak Demo: \n");

        ptr = (int*)malloc(40000*sizeof(int));

        printf("Enter 1 for continue else 0 for terminate: \n");
        scanf("%d", &chooice);
        free(ptr);// If you print this line and run this code you can view cpu in memory in task manager

    }

}