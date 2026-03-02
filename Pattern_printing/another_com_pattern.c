#include<stdio.h>
#include<stdlib.h>


void main() {


    /*


* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
*
    
    
    */


    // int i,j, row, space;
    // printf("Enter the row: \n");
    // scanf("%d", &row);

    // for(i=0; i<row; i++){

    //     for(j=0; j<=i; j++) {

    //         printf("* ");

    //     }
    //     printf("\n");

    // }


    // for(i=row-1; i>0; i--){

    //     for(j=i; j>0; j--) {

    //         printf("* ");

    //     }
    //     printf("\n");

    // }


    // Or

    int i,j, row, space;
    printf("Enter the row: \n");
    scanf("%d", &row);

    for(i=0; i<row-1; i++){

        for(j=0; j<=i; j++) {

            printf("* ");

        }
        printf("\n");

    }


    for(i=row; i>0; i--){

        for(j=i; j>0; j--) {

            printf("* ");

        }
        printf("\n");

    }



}