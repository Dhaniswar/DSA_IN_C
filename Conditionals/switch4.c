#include<stdio.h>
#include<stdlib.h>

/*
Write the programme at first input form user A-Z, a-z, 0-9, or any special aaracter
the print it saying special aaracter or number or latter uppercase or lowercase

*/


void main() {

    int a;

    printf("enter the intehers value: \n");
    scanf("%d", &a);


    switch(a) {
        case 91 ... 100:
            printf("A+\n");
            break;
        case 81 ... 90:
            printf("A\n");
            break;
        case 71 ... 80:
            printf("B+\n");
            break;
        case 61 ... 70:
            printf("B\n");
            break;
        case 51 ... 60:
            printf("C+");
            break;
        case 41 ... 50:
            printf("C\n");
            break;
        case 34 ... 40:
            printf("D+\n");
            break;
        default:
            printf("Fail\n");
        
 
    }
    
}