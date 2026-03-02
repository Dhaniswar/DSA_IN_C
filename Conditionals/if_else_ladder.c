#include<stdio.h>
#include<stdlib.h>

/*
Write the programme to fint the maximum number among 3 number using nested if else

*/

void main() {

    int grade;
    printf("Enter the grade: \n");
    scanf("%d",&grade);

    if(grade>90)
        printf("A+");

    else if(grade>80)
        printf("A");
    
    else if(grade>70)
        printf("B");
    
    else if(grade>50)
        printf("C");
    
    else
        printf("D");



    
}