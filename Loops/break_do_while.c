#include<stdio.h>
#include<stdlib.h>

/*
// Beak and witch in while loop
10. It reminate the loop/ or exit from the loop

*/
void main() {

    int i,n, sum=0;


    do{
        
        printf("Enter the number: \n");
        scanf("%d", &n);
        if(n<0){
            break;
        }

        sum +=n;

    } while(1);

    printf("%d\n", sum);


}