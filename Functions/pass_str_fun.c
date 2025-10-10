#include<stdio.h>

/*
Pass array as an argument in function

*/


int display(int arr[], int arr_size) // this is called function defination and inside it  are called formal parameter
{

    int avg=0, i;

    for(i=0; i<arr_size; i++){
     avg += arr[i];
    }
    printf("Size of array in avg function is: %ld\n", sizeof(arr_size));
    return avg/5;


}



void main() {

 char str[] = "Dhaniswar";

int size = sizeof(str)/sizeof(str[0]);
char result = display(str, size);// it will pass base address of the array (that means array is passed by value)

  printf("Average of given array element is: %d\n", result);
    
}





