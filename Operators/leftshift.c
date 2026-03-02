#include<stdio.h>
#include<stdlib.h>


/*
// Bit wise operator, using this operator we can manupulate data at bit level

// left shit

~  => bitwise NOT (it is also known as one's complement)
<<  => bitwise left shit
>>  => bitwise right shift

"


*/


void main() {

    int a =10, c;

    c = a << 2;

    printf("%d\n", c);// It would output 40

    /*
    1). first we convert decimal to binary values
    2). 10=1010 and 5=0101
    3). then perform bitwise operation, we need to left shift by given bits to the left side
    4). and represent using 8 bits 
    5). then remove first 2 digits from the 8 bits
    6). and shift all the bits to left side and fill last tralling fill with 0
    7). now convert the binary bits to decimal number which is your answer

    e.g,

    int a =10, c;

    c = a << 2;

    printf("%d\n", c)// It would output 40



    00001010 (reperesenting using 8 bit)

    001010   (removing first 2 digits and shifting bit to left side)

    00101000 (filling last trailling empty bits with 0)

    00101000 => 40 (now converting binary value to decimal)

    
    */



    int m =10, p;

    p = m << 4;

    printf("%d\n", p);// It would output 40


    // And the there is short cut 
    // left oprant(number)*2 raise the power left opprant(number)
    // eg, 10 * 2^4 => 10 * 16 => 160
    // eg, 10 * 2^2 => 10 * 4 => 40



}