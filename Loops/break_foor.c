#include<stdio.h>
#include<stdlib.h>

/*
// Beak and witch in Loop
10. It reminate the loop/ or exit from the loop

*/
void main() {

    int i,n, sum=0;


    for(i=1; i<=5; i++){

        printf("Enter the number: \n");
        scanf("%d", &n);

        if(n<0){
            break;
        }

        sum +=n;


    }

    printf("%d\n", sum);


}