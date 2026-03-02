#include<stdio.h>
#include<stdlib.h>

/*
Write the programme at first input form user A-Z, a-z, 0-9, or any special character
the print it saying special character or number or latter uppercase or lowercase

*/

/*

void main() {

    char ch;

    printf("Enter the any input: \n");
    scanf("%c", &ch);

    if(ch>=65 && ch<=90)
         printf("It is Capital Letter which is: %c and it's ASCII value is: %d\n", ch, ch);
    
    else if(ch>=97 && ch<=122)
         printf("It is Small Letter which is: %c and it's ASCII value is: %d\n", ch, ch);
        
    else if(ch>=48 && ch<=57)
         printf("It is digits which is: %c and it's ASCII value is: %d\n", ch, ch);
    
    else
         printf("It is special character which is: %c and it's ASCII value is: %d\n", ch, ch);




    
}


*/




void main() {

    char ch;

    printf("Enter the any input: \n");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z')
         printf("It is Capital Letter which is: %c and it's ASCII value is: %d\n", ch, ch);
    
    else if(ch>='a' && ch<='z')
         printf("It is Small Letter which is: %c and it's ASCII value is: %d\n", ch, ch);
        
    else if(ch>='0' && ch<='9')
         printf("It is digits which is: %c and it's ASCII value is: %d\n", ch, ch);
    
    else
         printf("It is special character which is: %c and it's ASCII value is: %d\n", ch, ch);




    
}