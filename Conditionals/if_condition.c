#include<stdio.h>
#include<stdlib.h>


// void main() {

//     int a;
//     printf("Enter the number: \n");
//     scanf("%d", &a);

//     // if(a){
//     //     printf("Inside if block: \n");
//     //     printf("value of a=%d \n", a);

//     // }

//     if(a); // it will not gives error, it means it terminating the if block, all the statement is going to print( there is no condition)
//     {
//         printf("Inside if block: \n");
//         printf("value of a=%d \n", a);

//     }
//     printf("outside if block: \n");

// }



// void main() {

//     int age;
//     printf("Enter the age: \n");
//     scanf("%d", &age);

//     if(age>20); 

//         printf("age is: %d \n", age); // like here if we write multiple line of  code with out currley bracess then except first line all the other line will be consider as outside condition block
//         printf("you can go coffee with me: \n");

    
//     printf("Its time to go to home: \n");

// }


// void main() {

//     int age;
//     printf("Enter the age: \n");
//     scanf("%d", &age);

//     if(age=20) // you need to take care of this, if you are not comparing you are assigning the value that mean 1=> true
//     {
//         printf("age is: %d \n", age); // like here if we write multiple line of  code with out currley bracess then except first line all the other line will be consider as outside condition block
//         printf("you can go coffee with me: \n");
//     } 

    
//     printf("Its time to go to home: \n");

// }




void main() {

    int age;
    printf("Enter the age: \n");
    scanf("%d", &age);

    //if(!age)// it except zero it is always false for all the integers valuf of age
    if(!0) // it means it is always true
    {
        printf("age is: %d \n", age); // like here if we write multiple line of  code with out currley bracess then except first line all the other line will be consider as outside condition block
        printf("you can go coffee with me: \n");
    } 

    
    printf("Its time to go to home: \n");

}