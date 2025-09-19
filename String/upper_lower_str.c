#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
// pre defined function to convert lower case string to upper case and vice-versa are srtupr(), strlwr(),
// But these function may not work on new version of compiler


ASCII value 

A = 65
B= 66
.
.
.
Z=90

and 
a = 97
b= 98
.
.
.

z = 122


*/


void main()
{

  char s1[30] = "Dhaniswar";

  char ch;
  int i, j, k=0;

 printf(" given orginal string is: %s\n", s1);


 for(i=0; s1[i]!='\0'; i++) {

    if(s1[i]>=65 && s1[i]<=90){

        s1[i] = s1[i] + 32;
    }

 }

 printf("Converting given string to Upper case is: %s\n", s1);



}