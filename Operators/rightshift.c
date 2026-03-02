#include<stdio.h>
#include<stdlib.h>


/*
// Bit wise operator, using this operator we can manupulate data at bit level

// Right shit

~  => bitwise NOT (it is also known as one's complement)
<<  => bitwise left shit
>>  => bitwise right shift

"


*/


void main() {

    int a =10, c;

    c = a >> 2;

    printf("%d\n", c);// It would output 2

    /*
    1). first we convert decimal to binary values
    2). 10=1010 and 5=0101
    3). then perform bitwise operation, we need to right shift by given bits to the right side
    4). and represent using 8 bits 
    5). then remove last 2 or given digits from the 8 bits
    6). and shift all the bits to right side and fill first empty place with  0
    7). now convert the binary bits to decimal number which is your answer

    e.g,

    int a =10, c;

    c = a >> 2;

    printf("%d\n", c)// It would output 40



    00001010 (reperesenting using 8 bit)

      000010   (removing last 2 digits and shifting bit to right side)

    00000010 (filling first 2 empty places with with 0)

    00000010 => 2 (now converting binary value to decimal)

    
    


    */

    int m =10, p;

    p = m >> 4;
    printf("%d\n", p);// It would output 0



    // int m =10, p;

    // p = m >> 4;
    // printf("%d\n", p);// It would output 0


    // 00001010
    // 0000
    //    0000
    //00000000 => 0



    // And the there is short cut 
    // Right oprant(number)/ 2 raise the power left opprant(number)
    // eg, 10 / 2^4 => 10 / 16 => 0
    // eg, 10 / 2^2 => 10 / 4 => 2



}