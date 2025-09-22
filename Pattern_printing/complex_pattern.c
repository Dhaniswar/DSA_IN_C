#include<stdio.h>
#include<stdlib.h>




void main() {

     /*

      *
     ***
    *****
   *******
  *********

    */


    // int i, j, row, space;
    // printf("Enter the number of rows: \n");
    // scanf("%d", &row);

    // for(i=0; i<row; i++) {
    //     for(space=0; space<(row-i); space++) {
    //         printf(" ");
    //     }

    //     for(j=0; j<=i; j++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }




    // int i, j, row, space;
    // int n=1;
    // printf("Enter the number of rows: \n");
    // scanf("%d", &row);

    // for(i=0; i<row; i++) {
    //     for(space=0; space<(row-i); space++) {
    //         printf(" ");
    //     }

    //     for(j=0; j<=i; j++) {
    //         printf("%d ",n);
    //         n++;
    //     }
    //     printf("\n");
    // }




    /*
         *
        ***
       *****
      *******
     *********

    */


    // this code is not fully correct cause this is done by me
    // int i,j, row, space;
    // printf("Enter the row: \n");
    // scanf("%d", &row);

    // for(i=1; i<=row; i++){

    //     for(space=1; space<=(row-i); space++) {
    //         printf(" ");
    //     }

    //     for(j=1; j<=i && i%2!=0; j++) {

    //         printf("* ");

    //     }
    //     printf("\n");

    // }




    // int i,j, row, space;
    // printf("Enter the row: \n");
    // scanf("%d", &row);

    // for(i=1; i<=row; i++){

    //     for(space=1; space<=(row-i); space++) {
    //         printf(" ");
    //     }

    //     for(j=1; j<=(2*i-1); j++) {

    //         printf("*");

    //     }
    //     printf("\n");

    // }


    /*
    *********
     *******
      *****
       ***
        *
    */

    int i,j, row, space;

    printf("Enter the no of row: \n");
    scanf("%d", &row);

    for(i=row; i>=1; i--) {
        for(space=1; space<=(row-i); space++){
            printf(" ");

        }

        for(j=1; j<=(2*i-1); j++) {
            printf("*");
        }
        printf("\n");
    }




}