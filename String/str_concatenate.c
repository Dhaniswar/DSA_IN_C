#include<stdio.h>
#include<stdlib.h>
#include<string.h>






/*
// String concatenation using pre-defined function strcat()
// first parameter is destination where we append another string and the second one is source 



void main() {

char s1[20] = "Dhaniswar";
char s2[20] = "BK";

// strcat(s1,s2); // first parameter is destination where we append another string and the second one is source 
// puts(s1);

strcat(s2,s1); // first parameter is destination where we append another string and the second one is source 
puts(s2);





}


*/







// String concatenation from stratch



/*

void main() {

char s1[20] = "Dhaniswar";
char s2[20] = "BK";

char new_str[30];
int i, j;


int s1_len = strlen(s1);
int s2_len = strlen(s2);



for(i=0; i<=s2_len; i++) {

    s1[s1_len+i] = s2[i];


}

puts(s1);


}

*/




/*
if you want to cancatenate only specific character then you can use stencat() function,
it takes 3 parameter, fist=> destination string, second=> source string, and last one is how many string do you wnat to concatenate


*/


void main() {

char s1[20] = "Dhaniswar";
char s2[20] = "BahadurKumar";


int i;

strncat(s1, s2, 5);

puts(s1);


}