#include<stdio.h>
#include<stdlib.h>


/*

while within a while is called nested while loop

*/



/*

void main() {
    int i=0,j=1;

    while(i<3) {

        while(j<=3) {
         
            printf("j=%d\n",j++);

        }

        printf("i=%d\n",i++);

    }

}

*/





void main() {
    int i=0,j=1;

    while(i<=3) {

        // infinite loop
        while(j<=3) {
         
        }

        printf("i=%d, j=%d\n",i++, j++);

    }

}

