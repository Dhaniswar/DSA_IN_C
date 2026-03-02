#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
1. pre define functions strcmp() and strncmp() which is used to compare the string

2.  strcmp() it will takes two argument that is pointer to string

3. strcmp() function return integers values 0, -ve and +ve
0 => both string are same

+ve => when the first character that does not match is greater in string
-ve => when the first character that doses not match is less in String

*/

/*
// Comparing string using pre defined function


void main() {

    // char s1[30] = "Computer";
    // char s2[30] = "Computer";


    // char s1[30] = "Hello";
    // char s2[30] = "Welcome";

    char s1[30] = "Imperturbable";
    char s2[30] = "Amiable";

    int str_compare = strcmp(s1,s2);// it compare character by character

    if(str_compare == 0){
        printf("Both the string are same and return value is: %d\n", str_compare);
    }

    else{
        printf("String are not and return value is: %d\n", str_compare);

    }
}

*/

/*
// comparing string from scratch using for loop


void main() {

    char s1[30] = "Computer";
    char s2[30] = "Computer";


    // char s1[30] = "Hello";
    // char s2[30] = "Welcome";

    // char s1[30] = "Imperturbable";
    // char s2[30] = "Amiable";
    int i;

    int s1_len = strlen(s1);
    int s2_len = strlen(s2);


    if(s1_len == s2_len) {
        for(i=0; i<=s1_len; i++) {

            if (s1[i] !=s2[i]) {
                printf("String are not same: \n");
                exit(1);
            }

        }
        printf("Both string are same \n");
    }

    else{
            printf("String are not same: \n");


    }


}


*/

/*
// comparing string from scratch using while loop



void main()
{

    char s1[30] = "Computer";
    char s2[30] = "Computer";

    // char s1[30] = "Hello";
    // char s2[30] = "Welcome";

    // char s1[30] = "Imperturbable";
    // char s2[30] = "Amiable";
    int i = 0;

    int s1_len = strlen(s1);
    int s2_len = strlen(s2);

    if (s1_len == s2_len)
    {

        while (i < s1_len)
        {

            if (s1[i] != s2[i])
            {
                printf("String are not same: %c and %c \n", s1[i], s2[i]);

                printf("String are not same \n");
                exit(1);
            }
            i++;
        }

        printf("Both string are same \n");
    }

    else
    {
        printf("String are not same out: \n");
    }
}


*/




// Another logic to compare string

void main()
{

    // char s1[30] = "Computer";
    // char s2[30] = "Computer";

    char s1[30] = "Hello";
    char s2[30] = "Welcome";

    int flag = 0;

    // char s1[30] = "Imperturbable";
    // char s2[30] = "Amiable";
    int i = 0;
    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            flag =1;
            break;
        }
    }

    if(flag == 1) {

        printf("String are not same: \n");


    }

    else {
         printf("Both String are same: \n");

    }


  
}
