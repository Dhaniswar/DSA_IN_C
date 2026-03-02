#include<stdio.h>
#include<stdlib.h>

/*
Write the programme at first input form user A-Z, a-z, 0-9, or any special character
the print it saying special character or number or latter uppercase or lowercase

*/


void main() {

    char ch;

    printf("Enter any letter from your name in Upper case: \n");
    scanf("%c", &ch);


    switch(ch){
        case 'D':
            printf("the entered letter is: %c\n", ch);
            break;
        case 'H':
            printf("the entered letter is: %c\n", ch);
            break;
        case 'A':
            printf("the entered letter is: %c\n", ch);
            break;
        case 'N':
            printf("the entered letter is: %c\n", ch);
            break;
        case 'I':
            printf("the entered letter is: %c\n", ch);
            break;
        case 'S':
            printf("the entered letter is: %c\n", ch);
            break;
        case 'W':
            printf("the entered letter is: %c\n", ch);
            break;
        case 'R':
            printf("the entered letter is: %c\n", ch);
            break;
        case 'B':
            printf("the entered letter is: %c\n", ch);
            break;
        case 'K':
            printf("the entered letter is: %c\n", ch);
            break;
        
        default:
            printf("Entered value is did not matched with any of your name letter:%c \n", ch);
 
    }




    
}