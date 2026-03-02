#include<stdio.h>
#include<stdlib.h>


/*
// Special  operator

","       => comma operator
"sizeof"  => sizeof operator
"*"       => pointer/dereference operator
"&"       => pointer operator
".", "->" => member selection operator

1). ","  => comma operator is having least precedence and associvity is left to right


*/


void main() {

//   int a=10, b=5, c=15; // here "," comma is acting as separator

// ","       => comma operator, it is binary operator so, it needs 2 operanss


// Let see the example where "," is acting as operator

int a;

// a = 5, 4; // here are 2 operator one ia assignmanr "=" and another is comma operator ",", fi  rst assignment operator claculate and a = 5;

/*
// here there are 3 operator braket (), assignment "=", and comma ",". 
// at first bracked is evaluated then comma operator is evaluated because it is inside the bracket

// How comma operator is evaluated
1). first operant is evaluated and the value is rejected
2). and second value would be evaluted and that value would be written
3). and finally return value is assigned to a
4). so below line will output a =4;


*/


a = (5,4); // here there are 3 operator braket (), assignment "=", and comma ",". 

printf("a=%d\n", a);

// a = 5, 4;     // in this case comma is act as a operator and it is correct way
//int  a = 5, 4; // but in this case comma is act as seperator so you will get error

int b;

b= (printf("Dhaniswar"), 2);

printf("%d\n", b);
printf("%d\n", 4%5);
printf("%d\n", b);



}