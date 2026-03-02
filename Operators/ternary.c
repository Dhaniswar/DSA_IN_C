#include<stdio.h>
#include<stdlib.h>



void main() {
    int a, b, largest_number;

    printf("Enter the two numbers a and b: \n");
    scanf("%d%d", &a, &b);
    largest_number = a>b? a: b;
    printf("largest number is: %d\n", largest_number);
}