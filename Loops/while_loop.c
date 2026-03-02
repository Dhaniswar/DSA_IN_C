#include<stdio.h>
#include<stdlib.h>

/*

*/


void sum() {
    int a=10, b=20, sum=0;

    sum = a + b;
    printf("Sum of two number is: %d\n", sum);
}


void main() {

    int chooice=1;


    while(chooice){

        sum();
        printf("Enter 1 for continue else 0 for terminate: \n");
        scanf("%d", &chooice);

    }

}