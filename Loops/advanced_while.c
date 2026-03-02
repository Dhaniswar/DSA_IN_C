#include<stdio.h>
#include<stdlib.h>

/*

Different way of writing the while loop

*/


void main() {


    /*
    
        int i=1;

    while(i==1) {
        printf("%d\n", i);
        ++i;
    }
    printf("End of the programme\n");


    
    */


    /*
    
    // This loop execute infinite time, because we are using assignment operator insted of condition
    int i=1;

    while(i=1) {
        printf("%d\n", i);
        ++i;
    }
    printf("End of the programme\n");
    
    */


 
    /*
    
    // This loop execute infinite time
    int i=10;

    while(1) {
        printf("%d\n", i);
        ++i;
    }
    printf("End of the programme\n");
    
    */




    /*
    //This loop execute infinite time
    int i=10;

    while(i) {
        printf("%d\n", i);

    }
    printf("End of the programme\n");
    
    */





    /*

    // This loop execute all the possible range of integers but not became infinite loop, one the value become zero it will terminate
    int i=10, count=0;

    while(i) {
        printf("%d\n", i);
        count++;
        ++i;
    }
    printf("End of the programme\n");
    printf("Number of time loop executed: %d\n", count);
    
    */



   
/*

// It will not execute the loop 
  int i;

    while(i<=10) {
        printf("%d\n", i);
        ++i;
    }
    printf("End of the programme\n");

*/




/*

// It will not execute the loop 
  int i=0;

    while(i++) {
        printf("%d\n", i);
    }
    printf("End of the programme\n");


*/



/*

// It will not execute the loop 
  int i=0;

    while(++i);
    {
        printf("%d\n", i);
    }
    printf("End of the programme\n");

*/



/*

// While loop with character

char ch = 'a';

    while(ch)
    {
        printf("%d and %c\n", ch, ch);
        ch++;
    }
    printf("End of the programme\n");

*/



// While loop with multiple logical operator
int i = 0;
char ch = 'a';

    while(ch<127 && i==0)
    {
        printf("%d and %c\n", ch, ch);
        ch++;
    }
    printf("End of the programme\n");




}