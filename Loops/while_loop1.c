#include<stdio.h>
#include<stdlib.h>

/*

It is entry controlll loop

syntax:
intitlization  
while(condition/termination loop) {
//body of the loop
modification/update
}


*/

void main() {

    // print number from 1 to 10

    // int i=1;

    // while(i<=10) {
    //     printf("%d\n", i);
    //     i++;
    // }


    // int i=10;
    //     while(i>0) {
    //     printf("%d\n", i);
    //     i--;
    // }


    int i=1, n;
    printf("Enter the number you want to print the table of: \n");
    scanf("%d",&n);

        while(i<=10) {
        printf("%d x %d = %d\n",n,i, n*i);
        i++;
    }



}