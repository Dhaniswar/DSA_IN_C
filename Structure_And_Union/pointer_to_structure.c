#include<stdio.h>
#include<stdlib.h>

/*

Pointer to array


*/

struct Employee{
    int id;
    char name[30];
    float salary;

};

void main() {

    struct Employee e1 = {1, "Dhaniswar", 99999};

    struct Employee *ptr;

    ptr = &e1;

    printf("EmpId=%d, EmpName:%2.9s, and EmpSalary: %2.f\n", ptr->id, ptr->name, ptr->salary);
    printf("EmpId=%d, EmpName:%2.9s, and EmpSalary: %2.f\n", (*ptr).id, (*ptr).name, (*ptr).salary);



}