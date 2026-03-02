#include<stdio.h>
#include<stdlib.h>

/*
#Dangling pointer
i. the pointer which is pointing to the free memory location

*/





// void main() {

// /*

//  int *ptr=NULL;


// ptr = (int*)malloc(sizeof(int));

// *ptr = 10;

// printf("%d\n", *ptr);

// free(ptr);// Now it is called Dangling pointer


// printf("%d\n", *ptr);// It will show unpredictable behaviour

// ptr = NULL;

// printf("%d\n", *ptr);

// */

// int *ptr=f();
// printf("%d\n", *ptr);


// }







/*

int* f() {
    int a=9;

    return &a;
}


void main() {


int *ptr=f();
printf("%d\n", *ptr);



}

*/




void main() {


 int *ptr=NULL;

 {
    int a=5;
    ptr=&a;
    printf("a=%d\n", *ptr);
 }


printf("%d\n", *ptr);


}


