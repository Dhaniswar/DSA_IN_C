#include<stdio.h>
#include<stdlib.h>

/*
Dynamic memory allocation using malloc()

i). calloc() => means memory allocation this function is generally use to allocate memory for Array

a) calloc() stant for => Contiguous allocation
b) it is used to allocate memory dynamically, and it will allocate memory in multiple block, and every block is of same size

ii)calloc( ) => takes two argument => it will return base address of that block in the form of void pointer, address of  first bite, to hold address we need pointer

iii).Syntax calloc(size_t n, size_t size) = It will return void pointer, where size_t= signed int, and n = no.of blocks, size=size of each block

b). void* calloc(5, sizeof(int)) // it means it will initialize 5 block and each block size will be  4 bytes

iv). int* pointervariablename = (datatype*)calloc(n, sizeof(datatype))
v). In case of failure c alloc() function will return null pointer

vi). and do no't forget to free the memory

vii). By default in calloc() memory of all the block initialize with zero

*/



/*


void main() {

  int n, i, *ptr=NULL;
  printf("Enter the value of n: \n");
  scanf("%d", &n);
  ptr = (int*)calloc(n, sizeof(int));
  printf("Enter the values: \n");

//   for(i=0; i<n; i++) {
//     scanf("%d", (ptr+i));
//   } // if you comment thes lines then it will assign each lock with values zero(0)
  printf("values of dynamically allocated memory: \n");
    for(i=0; i<n; i++) {
    printf("%d\n", *(ptr+i));
  }
  free(ptr);


}
*/


void main() {

  int n, i, *ptr=NULL;
  printf("Enter the value of n: \n");
  scanf("%d", &n);
  ptr = (int*)calloc(n, sizeof(int));
  printf("Enter the values: \n");

  for(i=0; i<n; i++) {
    scanf("%d", (ptr+i));
  } // if you comment thes lines then it will assign each lock with values zero(0)
  printf("values of dynamically allocated memory: \n");
    for(i=0; i<n; i++) {
    printf("%d\n", *(ptr+i));
  }
  free(ptr);

  float *ptr1=NULL;
  printf("Enter the value of n: \n");
  scanf("%d", &n);
  ptr1 = (float*)malloc(n*sizeof(float));
  printf("Enter the values: \n");

  for(i=0; i<n; i++) {
    scanf("%f", (ptr1+i));
  } // if you comment thes lines then it will assign each lock with values zero(0)
  printf("values of dynamically allocated memory: \n");
    for(i=0; i<n; i++) {
    printf("%f\n", *(ptr1+i));
  }
  free(ptr);


}