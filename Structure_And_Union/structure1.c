#include<stdio.h>
#include<stdlib.h>

/*

i)  Strucrute is user defined data types that group variables of dirrerent different datatypes under a single name
ii) Syntax => 
struct student {

int rollno;
char name[30];
float marks;

};
iii) within the same structure two variables cann't have same name
iv) Application of structure is to process collection of different data types
v) we can not initialize variable of structure while creating the structure


*/

struct Student {
    int rollno;
    char name[20];
    float marks;
};


//Another way to create structure

struct employee{
    int rollno;
    char name[20];
    float salary;
}e1,e2,e3;

// We can 

struct Person{
    int rollno;
    char name[20];
    float salary;
}p1={1, "John", 52003.4};


// even we can initialize structure variable outside main function it will act as global variables
struct Student s3= {6, "Reema", 3625478.2};

void main() {

    struct Student s1; // s1 is known as object of this sturecture

    printf("Enter the name of the student: \n");
    scanf("%s", s1.name);
    printf("Enter the rollno of the student: \n");
    scanf("%d", &s1.rollno);
    printf("Enter the marks of the student: \n");
    scanf("%f", &s1.marks);



    printf("the name of the student: %s\n",s1.name);
    printf("the rollno of the student: %d\n",s1.rollno);
    printf("the marks of the student: %f\n",s1.marks);


    e1.rollno = 20;

    printf("rollno of the employee is: %d\n", e1.rollno);


    struct Student s2 = {1, "Arjun", 90.91};// initializing at compilr time, order should match




}