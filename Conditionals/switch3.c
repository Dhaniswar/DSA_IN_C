#include<stdio.h>
#include<stdlib.h>

/*
Write the programme at first input form user A-Z, a-z, 0-9, or any special character
the print it saying special character or number or latter uppercase or lowercase

*/


void main() {

    char ch;

    printf("Enter any vowel latter: \n");
    scanf("%c", &ch);


    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("the entered letter is: %c which is vowel\n", ch);
            break;
        default:
            printf("Entered letter is: %c which is consonant\n", ch);
 
    }
    
}