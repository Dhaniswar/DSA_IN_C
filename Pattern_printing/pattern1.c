#include <stdio.h>
#include <stdlib.h>

void main()
{

    int i, j;

    /*
    ****
    ****
    ****
    ****
    */

    // for(i=0; i<5; i++){
    //     for(j=0; j<5; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    /*

    *
    **
    ***
    ****
    *****

    */

    // for(i=0; i<5; i++){
    //     for(j=0; j<=i; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    /*

    *
    **
    ***
    ****
    *****

    */

    // for(i=1; i<=5; i++){
    //     for(j=1; j<=i; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    /*
    11
    22 33
    44 55 66
    77 88 99 110
    */

    // int num = 11;

    // for(i=0; i<4; i++){
    //     for(j=0; j<=i; j++) {
    //         printf("%d\t", num);
    //         num +=11;

    //     }
    //     printf("\n");
    // }

    /*

    *****
    ****
    ***
    **
    *

    */

    // for(i=0; i<5; i++) {
    //     for(j=i; j<5; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // int num = 13;

    // for (i = 0; i < 3; i++)
    // {
    //     for (j = i; j < 5; j++)
    //     {
    //         printf("%d\t", num);

    //         if(num==130) {
    //             break;
    //         }
    //         num +=13;
    //     }

    //     printf("\n");
    // }





    /*

    *****
    ****
    ***
    **
    *

    */

    // for(i=0; i<5; i++) {
    //     for(j=5; j>i; j--) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }




    /*

    *****
    ****
    ***
    **
    *

    */

    // for(i=5; i>0; i--) {
    //     for(j=0; j<i; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    /*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    1 2 3 4 5 6
    
    */

    // for(i=1; i<=6; i++) {
    //     for(j=1; j<=i; j++) {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }


    

    /*

    // Assignment 

    1 2 3 4 5 6
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
    
    
    */


    for(i=6; i>=1; i--) {
        for(j=1; j<=i; j++) {

            printf("%d", j);

        }
        printf("\n");
    }





        /*

    // Assignment 

    6 5 4 3 2 1
    6 5 4 3 2
    6 5 4 3
    6 5 4
    6 5
    6
    
    
    */


    // for(i=1; i<=6; i++) {
    //     for(j=6; j>=i; j--) {

    //         printf("%d", j);

    //     }
    //     printf("\n");
    // }



}