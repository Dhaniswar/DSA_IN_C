#include<stdio.h>
#include<stdlib.h>



/*
In this file I will explain the problem in pointer

*/



void main() {



// int a[] = {10,11,-1,56,67,5,4};

// int *p, *q;
// p=a;

// printf("%d\n", *p);
// printf("%d %d %d\n", (*p)++, *p++, *++p);// after this point (*p)++, the original array changes to a[] = {10,11,0,56,67,5,4};

// q = p +3;

// printf("%d\n", *q-3);
// printf("%d\n", *--p +5);
// printf("%d\n", *p + *q);


//Assignment

/*


int a[] = {10,11,-1,56,67,5,4};

int *p, *q;
p=a;

q = &a[0] + 3;


printf("%d %d %d\n", (*p)++, *p++, *++p);//     -1 11 11 then original array would modify as a[] = {10,11,0,56,67,5,4};

printf("%d\n", *p);// 0
printf("%d\n", (*p)++);// 0 again modify original array as a[] = {10,11,1,56,67,5,4};
printf("%d\n", (*p)++); //1 again modify original array as a[] = {10,11,2,56,67,5,4};

q --;
printf("%d\n", (*(q+2))); //67
printf("%d\n", *(p+2) -2); //65

printf("%d\n", (*(p++ -2)-1)); //9




*/


// pointer with constant variable

const int a = -11;

const int *p;

// *p=10; // it will through complie time error


char str[] = "Welcome to Jenny's lecture";

char *ptr= str;

printf("%c\n", *ptr); //W
printf("%c\n", *(ptr++ +1)); //e
printf("%c\n", *((ptr-- +5)-1)+3); //ASCII vaue of m +3 => p
printf("%c\n", *(++ptr + 10)-32);// G
printf("%c %c %c\n",*ptr, *++ptr, *--ptr);// e e W












}