#include<stdio.h>
#include<stdlib.h>

/*
Write the programme at first input form user A-Z, a-z, 0-9, or any special character
the print it saying special character or number or latter uppercase or lowercase

*/


void main() {

    int a, b;
    char ch;
    printf("Enter two operands(any positive integer): \n");
    scanf("%d%d", &a, &b);
    printf("Enter operator(+,-,*,/, modulo): \n");
    scanf(" %c", &ch);


    switch(ch){
        case '+':
            printf("sum of two number is: %d\n", a+b);
            break;
        case '-':
            printf("difference of two number is: %d\n", a-b);
            break;
        case '*':
            printf("product of two number is: %d\n", a*b);
            break;
        case '/':
            printf("quotient of two number a/b is: %d\n", a/b);
            break;
        case 'I':
            printf("remainder of two number is: %d\n", a%b);
            break;
        default:
            printf("Please enter the valid operator, you can only choose from thie given list(+,-,*,/,modulo) but you have entered :%c \n", ch);
 
    }




    
}