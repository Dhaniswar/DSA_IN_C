#include<stdio.h>
#include<stdlib.h>


void main() {


/*


A 
A B 
A B C 
A B C D 
A B C D E 
    
    
*/


    // int i,j, row, space;
    // printf("Enter the row: \n");
    // scanf("%d", &row);

    // for(i=65; i<70; i++){

    //     for(j=65; j<=i; j++) {

    //         printf("%c ", j);

    //     }
    //     printf("\n");

    // }


    // or


    // int i,j, row, space;
    // printf("Enter the row: \n");
    // scanf("%d", &row);

    // for(i=0; i<row; i++){

    //     for(j=0; j<=i; j++) {

    //         printf("%c ", j+65);

    //     }
    //     printf("\n");

    // }

    /*
        A B C D E F 
        A B C D E 
        A B C D 
        A B C 
        A B 
    
    */

    // int i,j, row, space;
    // printf("Enter the row: \n");
    // scanf("%d", &row);

    // for(i=row; i>0; i--){

    //     for(j=0; j<=i; j++) {

    //         printf("%c ", j+65);

    //     }
    //     printf("\n");

    // }



    /*

    A 
    B B 
    C C C 
    D D D D 
    E E E E E 
    
    */

    int i,j, row, space;
    printf("Enter the row: \n");
    scanf("%d", &row);

    for(i=0; i<row; i++){

        for(j=0; j<=i; j++) {

            printf("%c ", i+65);

        }
        printf("\n");

    }



}