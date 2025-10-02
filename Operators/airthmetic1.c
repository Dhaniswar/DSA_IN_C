#include<stdio.h>
#include<stdlib.h>


/*

'%' operator is only be used with integers values if we tyr to used this operator with float then it will give error

//  10%7 => 3,
// -10%7 => -3,
//  10%-7 => 3 // always the result of modulo operator and the result of that modulo operator is based on the first operand 

// Precedence of airthmetic operator is 

first priority    * / %
second priority   + -
 // And the associvity is left to right

 L ------------> R


 // Assignment operator it is used to assigned the value from leght side to left side


 a = 5; // it means 5 valu will be assigned to variable a

 b = 5 * 4; // at first 5*4 expression is evaluated then this value is assigned to variable b

 and the Accosivity for assignment operator is right to left 

 L<-------------------R

 a = b = c = d = 10;


*/


void main() {

    int x =10;
    int y = 7;

    float a = 10;

    float b = 7;

    printf("%d\n", x/y);// output will be 1 it will only give integer


    printf("%d\n", x%y);// output will be 3 it will calculate remainder

    // printf("%f\n", a%b);// output will give error








}