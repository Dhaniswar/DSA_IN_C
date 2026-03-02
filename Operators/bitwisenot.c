#include<stdio.h>
#include<stdlib.h>


/*
// Bit wise operator, using this operator we can manupulate data at bit level

// NOT (Negation) it is also called the one's complemeny
// It will revese the result

~  => bitwise NOT (it is also known as one's complement)
<<  => bitwise left shit
>>  => bitwise right shift

"


*/


void main() {

    int a =5, b;

    b = ~a;

    printf("%d\n", b);// It will output -6

    /*
    1). first we convert decimal to binary values
    2). 10=1010 and 5=0101
    3). then perform bitwise operation, we need calculate 1's complement (just reverse the binary bits and a)
   

    e.g,

    int a =5, b;

    b = ~a;

    printf("%d\n", b)// It would output -6



    0101 (reperesenting using 4 bit)

    1010   (reverse the bits to calculate 1's complete)

    but you will get -6 while printing  printf("%d\n", b) => cause In computer memory negative value is store in the form of 2' complement

    1010
      +1
    =====
    1011 => 11

    
    */



    // int m =10, p;

    // p = ~M;

    // printf("%d\n", p);// It would output -11


    // And the there is short cut 
   
    //    n = -(n+1)




}