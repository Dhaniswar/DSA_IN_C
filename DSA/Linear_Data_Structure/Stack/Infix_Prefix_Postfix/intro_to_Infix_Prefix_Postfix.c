#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Expression:
Basically expression means it contains some constant, may be variable, or operands or operators or symbols
eg(p+q, 4 - 2, a + 6)
general form of biary expression is => <Operand> <Operator> <Operand> => and this form is known as Infix expression

#Precedence of expression and Associvity
1.) () {} []  L-R
2.) ^         R-L
3.) * /       L-R
4.) + -       L-R

Q1) 1 + 2 * 5 + 30/5
=> 1 + 2 * 5 + 6
=> 1 + 10 + 6
=> 11 + 6
=> 17


Q2) 2^2^3
 => 2^8
 => 256

Note: 
1. so parsing or processing of this infix operation is difficult
2. In term of time and as well as in terms of memory consumption

Conclusion=> So to address this problem we have 2 more expression Prefix and Postfix
*/