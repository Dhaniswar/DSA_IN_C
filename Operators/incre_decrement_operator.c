#include<stdio.h>
#include<stdlib.h>


/*
these are unary operator
++ and --

1). ++ => it going to increase the operand value by 1 
2). -- => it going to decrease the operand value by 1


x++ equivalent x = x + 1;

Prefix  => ++x;
Postfix => x++;

*/


void main() {

    int x =10;
    int y;

    y= x++;

    printf("%d\n",x);
    printf("%d\n",y);


    float a = 10;

    float b = 7.1;
    b++;

    printf("%f\n",b);
    // printf("%d\n",y);



}