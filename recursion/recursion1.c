#include<stdio.h>
#include<stdlib.h>

/*

when function call itself directly or indirectly is called recursion.

in recursion we need to have base/termination condition, otherwise it will run that program infinite times
*/



int factorial(int n){
    int count = 0;
    if(n==1 || n==0){
        return 1;
    }

    else{
        
        return n*factorial(n-1);
    }
}


void main() {

    int num;
    printf("Enter the positive integer: \n");
    scanf("%d", &num);

    if(num<0){
        printf("Factorial of -ve integer doesnot exist: \n ");
        exit(1);

    }

    int result = factorial(num);
    printf("Factorial of %d is: %d\n", num, result);


}