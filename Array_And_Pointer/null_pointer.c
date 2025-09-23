#include<stdio.h>
#include<stdlib.h>

/*
#null pointer
i. if we create pointer and do not initialize it then it may point to some other memory location, and if we print the value of that pointer it will show undefined behaviours
ii. If we don't initialize pointer this is called Wild pointer which is dangerous, so make sure you have to initialize pointer with NULL

iii. int *ptr=NULL; //crosspoinding value of null is zero(0)

iv. NULL is also the pointer in c, it is called null pointer

// NULL is is special value that doesnot point to any valid object, or it is point to zero memory location which is resevered. And you can con dereference it.

// it is used in error handling in c


*/

void main() {

 int *ptr=NULL;

//  printf("%d\n", *ptr); //you can con dereference it

ptr = (int*)malloc(5*sizeof(int));

}