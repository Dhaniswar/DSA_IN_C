#include<stdio.h>
#include<stdlib.h>

/*

i).   In C, union is a user-defined data type that can contain elements of the different data types just like structure.
ii).  But unlike structures, all the members in the C union are stored in the same memory location.
iii). Due to this, only one member can store data at the given point in time.

iv). The value of a union variable can be accessed using the dot (.) operator.
v).  A value can be assigned to the union variable using the assignment operator (=).

vi). In a union, all the variables share the same memory, so only one variable can store a value at a time.

*/

union Employee{
    int id;
    char name[30];
    float salary;

};

union abc {
    int a;
    char b;
    float c;

};

void main() {


    union abc u;

    union abc *ptr;

    ptr =&u;

    u.a =1;
    u.b=97;
    u.c=78.90;


 

    printf("EmpId=%d, EmpName:%c, and EmpSalary: %2.f\n", ptr->a, ptr->b, ptr->c);



}