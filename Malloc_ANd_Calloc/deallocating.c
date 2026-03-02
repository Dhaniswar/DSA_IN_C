#include<stdio.h>
#include<stdlib.h>


/*

i). free()Deallocating the Dynamically allocated Memory using free

Syntax => 
free(pointer) and it return void

ii). It will realese the previous allocated memory but it will not erase the data completely 





*/


/*

void main() {

  int n, i, *ptr=NULL;
  printf("Enter the value of n: \n");
  scanf("%d", &n);

  ptr = (int*)malloc(n*sizeof(int));

  if(ptr==NULL) {
    printf("Memory is not allocated: \n");
  }

  else {
    printf("Enter the values: \n");

  for(i=0; i<n; i++) {
    scanf("%d", (ptr+i));
  } // if you comment thes lines then it will assign each lock with values zero(0)
  free(ptr);

  printf("values of dynamically allocated memory: \n");
    for(i=0; i<n; i++) {
    printf("%d\n", *(ptr+i));
  }

  free(ptr);
  }


}

*/



int* display() {
    int *ptr, n, i;
    // printf("Enter the number: \n");
    // scanf("%d", &n);
    ptr = (int*)malloc(3*sizeof(int));

    printf("Enter the elemnts: \n");

    for(i=0; i<3; i++) {
        scanf("%d", (ptr+i));
    }

    return ptr;


}




void main() {

  int n, i;

  int *ptr1;

  ptr1 = display();

  printf("the Enter values are: \n");
  for(i=0; i<3; i++) {
    printf("%d\n", *(ptr1+i));
  }

  free(ptr1);
}


