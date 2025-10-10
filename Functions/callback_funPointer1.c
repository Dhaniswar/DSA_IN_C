#include<stdio.h>

/*
Callback Function using Function Pointer in C

syntax:





*/



void add(int a, int b){

    printf("addition=%d\n", a + b);
}


void sub(int a, int b){

    printf("subtraction%d\n", a - b);
}

void multi(int a, int b){

    printf("multiplication=%d\n", a * b);
}

void div(int a, int b){

    printf("division=%d\n", a / b);
}



void display(void (*ptr)(int, int)){

    (*ptr)(10, 5);
}




void main() {

 int choice, a,b;

 void (*ptr[10])(int, int)={add, sub, multi, div};
 printf("Enter choice(0=add, 1=sub, 2=multi, 3=div)\n");
 scanf("%d", &choice);
 printf("Enter a, b\n");
 scanf("%d %d", &a, &b);


 (*ptr[choice])(a,b);
    
}








