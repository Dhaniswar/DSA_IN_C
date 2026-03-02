#include<stdio.h>
#include<stdlib.h>

/*
1. Enum is the user define datatypes, 
2. basically use for to asign name to integral constant
3. this data types has both global and local scope
4. with in the same scope the duplicate values are not allowed

for example like macro => #define max 50; 

// Syntax => enum days {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

Or typedef enum  {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}days;




*/

enum days {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};


void main() {

int i;
enum days day=Sunday;

if(day==Sunday){
    printf("Today is the Sunday \n");
}

printf("Day is: %d\n", day);

}