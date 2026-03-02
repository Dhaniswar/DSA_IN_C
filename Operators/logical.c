#include<stdio.h>
#include<stdlib.h>


/*
//Associvity of these logical operator is left to right
// higer priority at first

"
!   => Logical NOT
",

"
&&  => Logical AND

",
||  => Logical OR
"

"

// second priority at first

// Relational operator is having higher priority than logical operator 


&&  => Logical AND
||  => Logical OR
!   => Logical NOT

// Logical operators are used to check more than one condition

// Other than zero(0) all the numbers are considered as true i.e => 1

*/



 


void main() {

    int a=10, b=5;


    printf("%d\n", a==b && b<a);// 0

    printf("%d\n", a && b);// 1
    printf("%d\n", -1 && -2);// 1
    printf("%d\n", -1 && 0);// 0

    printf("%d\n", -1 || 0);// 1
    printf("%d\n", 0 || 0);// 1


    printf("%d\n",!0);// 1
    printf("%d\n", !5);// 0




    int m=4, n=6, result;

    result = m<n && printf("Dhaniswar");

    printf("%d\n", result); // Dhaniswar 1 => because other than zero (0) it will consider 1 or true

    int result1 = m>n && printf("Dhaniswar") || printf("Turorial");

    printf("%d\n", result1); 


    int result2 = m>n && printf("Dhaniswar") || printf("Turorial") && printf("DT");

    printf("%d\n", result2); // Dhaniswar 1 => because other than zero (0) it will consider 1 or true









    

}