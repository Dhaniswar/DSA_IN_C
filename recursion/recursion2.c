#include<stdio.h>
#include<stdlib.h>

/*

when function call itself directly or indirectly is called recursion.

in recursion we need to have base/termination condition, otherwise it will run that program infinite times


In this file write the code for sum of n natural numbers using recursion
*/



int sum_of_natural_num(int n){
    if(n==1 || n==0){
        return n;
    }

    else{
        return n+sum_of_natural_num(n-1);
    }
}


void main() {

    int num;
    printf("Enter the positive integer: \n");
    scanf("%d", &num);


    int result = sum_of_natural_num(num);
    printf("Factorial of %d is: %d\n", num, result);



}