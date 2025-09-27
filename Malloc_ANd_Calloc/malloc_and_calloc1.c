#include<stdio.h>
#include<stdlib.h>

/*
Static memory allocation => Memory will allocate at compile time // Or memory allocation is fixed, we can not modify the memory allocation 
i). In static memory allocation, memory csn not be re-use

Dynamic memory allocation => Memory will allocate at run time // And in this we can modify the memory allocation in run time

#Note whenever you allocate dynamic memory then the memory will allocate at Heap (we have 4 segment of memory, code/text, Global/Static, Stack, and Heap)
#and Stack and Heap always grow in opposite directions

ii). After allocation dynamic memory you need to free dynamically allocated memory

iii). in c programming there are 3 function malloc(), calloc(), and realloc(), with the help of these function we can allocate memory dynamically


*/

int global;

void main() {

    int a=5;
    static int j;
    printf("a=%d\n", a);
}