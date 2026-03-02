#include<stdio.h>

/*
Callback Function using Function Pointer in C

syntax:





*/



void sum(int a, int b){

    printf("Adderss of sum fun%p\n", sum);

    printf("%d\n", a + b);
}


void diff(int a, int b){

    printf("Adderss of sum fun%p\n", diff);
    printf("%d\n", a - b);
}



void display(void (*ptr)(int, int)){

    (*ptr)(10, 5);
}




void main() {

    display(&sum);
    display(diff);
    
}








