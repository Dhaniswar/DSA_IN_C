#include<stdio.h>
#include<stdlib.h>

/*
realloc() => resize (increase/decrease) size the memory

syntax=> realloc(void *ptr, size_t size), *ptr= previously allocated memory using malloc or calloc

int *ptr, *ptr1;
ptr = (int*)malloc(n*sizeof(int))
ptr1 = (datatype*)realloc(ptr, n*sizeof(datatype))

a). and it will also return void pointer

Main application of realloc() is, it resizes previous allocated memory without loosing the previous content.


i) if possible then it will extent previous memory otherwise it will allocate new memory block and copy the content of prevoius memory location to new location and remove prevous memory block

#Some cases 
  int *ptr1 = (int*)realloc(NULL, n*sizeof(int));// if you replace ptr with null(that means previous pointer null and it will react as malloc())




*/




void main() {

  int n, i, *ptr=NULL;
  printf("Enter the value of n: \n");
  scanf("%d", &n);

  ptr = (int*)malloc(n*sizeof(int));

  printf("Enter the values: \n");

  for(i=0; i<n; i++) {
    scanf("%d", (ptr+i));
  } // if you comment thes lines then it will assign each lock with values zero(0)

  // printf("values of dynamically allocated memory: \n");
  //   for(i=0; i<n; i++) {
  //   printf("%d\n", *(ptr+i));
  // }

  int temp=n;
  printf("Enter updated value of n to increment or decrement: \n");
  scanf("%d", &n);
  int *ptr1 = (int*)realloc(ptr, n*sizeof(int));

  printf("previous Address=%p, new address=%p: \n", ptr, ptr1);


  // printf("Enter the values: \n");

  for(i=temp; i<n; i++) {
    scanf("%d", (ptr1+i));
  } 
  printf("values of dynamically allocated memory: \n");
    for(i=0; i<n; i++) {
    printf("%d\n", *(ptr1+i));
  }
  free(ptr1);


}