#include<stdio.h>
#include<stdlib.h>

/*
Dynamic memory allocation using malloc()

i). malloc() => means memory allocation this function is generally use to allocate memory for Structure and for array generally we use calloc() function

a). It allocate single block of memory

ii). Syntax => malloc( size ) => malloc(8) => it will allocate 8 bytes and it will return base address of that block in the form of void pointer, address of  first bite, to hold address we need pointer

iii). malloc(size_t size) = It will return void pointer, where size_t= signed int

b). void* malloc(3*sizeof(datatype))

iv). int* pointervariablename = (datatype*)malloc(3*sizeof(datatype))

v). In case of failure malloc() function will return null pointer

vi). and do no't forget to free the memory

vii). By default in malloc() memory of all the block initialize with any garbage values


*/

int global;

void main() {

  int n, i, *ptr=NULL;
  printf("Enter the value of n: \n");
  scanf("%d", &n);
  ptr = (int*)malloc(n* sizeof(int));
  printf("Enter the values: \n");

  // for(i=0; i<n; i++) {
  //   scanf("%d", (ptr+i));
  // } // of you comment these line it will assign some garbage values
  printf("values of dynamically allocated memory: \n");
    for(i=0; i<n; i++) {
    printf("%d\n", *(ptr+i));
  }
  free(ptr);


}