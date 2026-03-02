#include<stdio.h>

/*
Pass array as an argument in function

*/


int avg(int arr[], int arr_size) // this is called function defination and inside it  are called formal parameter
{

    int avg=0, i;

    for(i=0; i<arr_size; i++){
     avg += arr[i];
    }
    printf("Size of array in avg function is: %ld\n", sizeof(arr_size));
    return avg/5;


}



void main() {

  int a[5]={1,2,3,4,5};
  int size = sizeof(a)/sizeof(a[0]);
  printf("Size of array in main function is: %ld\n", sizeof(a));


  int result = avg(a, size);// it will pass base address of the array (that means array is passed by value)

  printf("Average of given array element is: %d\n", result);
    
}





