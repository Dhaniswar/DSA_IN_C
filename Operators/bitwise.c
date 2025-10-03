#include<stdio.h>
#include<stdlib.h>


/*
// Bit wise operator, using this operator we can manupulate data at bit level

// Although in ALU(Airthemtical Logicl Unit) we have that logic

// It can only be applied to integers and character values

//list of Bitwise operator

"
&  => bitwise AND
|  => bitwise OR
^  => bitwise XOR
~  => bitwise NOT (it is also known as one's complement)
<<  => bitwise left shit
>>  => bitwise right shift

"

1). first of all, the data would be converted into binary form
2). Then the operation is porformed on that data
3). next you will get result
5). following that the result would be in binary form
6). after that the result is converted into decimal form 
7). finally result would be printed to us

// ANd we can not perform these operation in minus number

*/


void main() {

    int a=10, b=5;

    /*
    1). first we convert decimal to binary values
    2). 10=1010 and 5=0101
    3). then porform bitwise AND operator
    4). If both the output is 1 then only 1 otherwise zero in bitwise AND


    1010
    0101
    -----
    0000 => decimal value is equal to 0
    
    */


    printf("%d\n", a&b); // it would output zero
    printf("%d\n", a|b); // it would output 10
    printf("%d\n", a^b); // it would output 10 in XOR(^) if both the input are same then zero other wise 1





}