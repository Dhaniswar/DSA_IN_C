#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*
1. strlen() function accepts parameter as pointer to the string or just name of the string because it pont to the base address



void main() {

char name[50] = "My name is Dhaniswa B K";

unsigned int length = strlen(name);  // strlen(char *str) and it returned unsigned integer , length can not be -ve

printf("Lenght of the string is: %d\n", length);

char name1[30];
printf("Enter the name: \n");
gets(name1);




}


*/




/*
calculating the lenght of the string from scratch




*/


void main() {

char name[50];
printf("Please enter the string: \n");
gets(name);

unsigned int length = 0, count =0;
int i;

while(name[i] != '\0') {
    length++;
    i++;
}
printf("Lenght of the string is: %d\n", length);


for(i=0; name[i]!='\0'; i++) {
    count ++;



}

printf("Lenght of the string using for loop: %d\n", count);


}







