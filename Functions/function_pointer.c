#include<stdio.h>

/*
Function Pointer

syntax:

return_type_of_fun (*pointer_name)(int, int);

int sum(int a, int b){

return a + b;

}


int (*ptr)(int, int) = &sum;




*/



int sum(int a, int b){

    return a + b;
}




void main() {

    int s =0;

    // int (*ptr)(int, int) = &sum;
    int (*ptr)(int, int) = sum; // both are works


    // s = (*ptr)(2,3);
    s = ptr(2,3); // both work fine
    printf("%d\n", s);


    
}








