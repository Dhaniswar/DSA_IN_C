#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/*
// reversing string using bultin function strrev()
// reversing string from stracth function strrev(),

// this is done by my idea

void main()
{

    int flag = 0, i=0, count=0;

    char s1[30] = "Imperturbable";

    char rev[30];

    printf("Original string is: %s\n",  s1);

    int s1_len = strlen(s1);

    while(s1[i] !='\0'){

        count++;

        rev[s1_len-1] = s1[i];

        i++;
        s1_len--;


    }

    printf("Revesre string is: %s\n",  rev);
    printf("How many times the while loop is executed : %d\n", count);






}



*/



/*

// reversing string from stratch in anoter efficient way

void main()
{

    int flag = 0, i=0, count=0;

    char s1[30] = "Imperturbable";

    char ch;

    printf("Original string is: %s\n",  s1);

    int s1_len = strlen(s1);

   
    for(i=0; i<s1_len/2; i++) {

        ch = s1[i];

        s1[i] = s1[s1_len-1-i];
        s1[s1_len-1-i] = ch;
        count++;

    }

    printf("Revesre string is: %s\n",  s1);
    printf("How many times the while loop is executed : %d\n", count);

}



*/





/*

// palindrome of string in c from stratch


void main()
{

    int flag = 1, i=0, count=0;

    char s1[30];
    printf("Enter the string: \n");
    gets(s1);




    int s1_len = strlen(s1);

   
    for(i=0; i<s1_len/2; i++) {

        if(s1[i] !=s1[s1_len-1-i]){
            flag = 0;
            break;
        }
        count++;

    }

    if(flag){
        printf("Given string is plaindrome of string: \n");
    }

    else{
        printf("Given string is not plaindrome of string: \n");

    }

}

*/






void main()
{

    int flag = 0, i=0, j=0, count=0;

    char s1[30] = "Imperturbable";

    char ch;

    printf("Original string is: %s\n",  s1);

    int s1_len = strlen(s1);

   
    for(i=0, j=s1_len-1; i<j; i++, j--) {

        ch = s1[i];

        s1[i] = s1[j];
        s1[j] = ch;
        count++;

    }

    printf("Revesre string is: %s\n",  s1);
    printf("How many times the while loop is executed : %d\n", count);

}






