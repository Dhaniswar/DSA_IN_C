#include<stdio.h>
#include<stdlib.h>

/*
// continue statement
1). It skip some statement
2). If the continue statement is found then it skip all the ststement below that keboard and move to another iteration


*/
void main() {

    int i, sum=0, n;

    for(i=1; i<=5; i++){

        printf("Enter the number: \n");
        scanf("%d", &n);

        if(n<0){
        printf("You have Entered -ve number : %d please enter the positive number \n", n);        
            continue;
        }

        sum +=n;


    }

    printf("sum=%d\n", sum);


}