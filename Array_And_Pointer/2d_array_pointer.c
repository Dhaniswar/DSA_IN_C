
#include <stdio.h>
#include <stdlib.h>



/*
In this file we are going to discuss 2D array with pointer,

how to access and input 2D array at compile time with the help of pointer

# in the below example

    int a[3][3] = {
        {6,2,5},
        {0,1,3},
        {4,9,8}
    };
int *p;

p = a; or p = a[0][0] we can not write this in 2D array insted of this we can write

p = &a[0][0] or p = a[0];

*/



/*



void main() {

    int a[3][3] = {

        {6,2,5},
        {0,1,3},
        {4,9,8}
    };

    int *p;

    // p = &a[0][0];

    p = a[0];

    printf("Base Address of 2D array is:%p \n", p);
    printf("Base Address of 2D array is:%p \n", a[0]);
    printf("Base Address of 2D array is:%p \n", a);
    printf("Base Address of 2D array is:%p \n", &a);
    printf("Base Address of 2D array is:%p \n", &a[0][0]);
    printf("Base Address of 2D array is:%p \n", *a);
    printf("first element of 2D array is:%d \n", *p);

    
    //if you print a + 1 = 112 (it will print the base address of next 1D array) or 
    //if you print *(a + 1) = 112 (it will also print base address of nest 1D array)
    

    printf("It will print the first element of index 1 2D array is:%p \n", a[1]);
    printf("It will print the first element of index 1 2D array is:%p \n", &a[1]);
    printf("It will print the first element of index 1 2D array is:%p \n", *(a+1));
    printf("It will print the first element of index 1 2D array is:%p \n", &a[1][0]);

 
    // *(a + 1) + 2 = 120 => It will print the address of 3th element of second array

    cause *(a +1) => print the address of second array + 2 ( meand size of 2 integers) ie, 8 
    so it will print the address of 3rd element 
 
    printf("It will print the address 3rd element of index 1 2D array is:%p \n", *(a+1)+2);
    printf("It will print the address 3rd element of index 1 2D array is:%p \n", &a[1][2]);

    printf("It will print the 3rd element of index 1 2D array is:%d \n", *(*(a+1)+2));
    printf("It will print the 3rd element of index 1 2D array is:%d \n", a[1][2]);



}




*/


   
   
   
   
    /*
   
    // in the formula, how to print element of 2D array using pointer,
    let I am printing a[2][0] using pointer 

    *(*(a+2)+0)
    so the generic formula is a[i][j] => *(*(a+i)+j)

   

       void main() {

    int a[3][3] = {

        {6,2,5},
        {0,1,3},
        {4,9,8}
    };

    int *p;

    // p = &a[0][0];

    p = a[0];

    int i, j;

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            // printf("At index a[%d][%d], the Array of element is: %d \n", i,j, a[i][j]);
            // printf("At index a[%d][%d], the Array of element is: %d \n", i,j, *(*(a+i)+j));
            // printf("At index a[%d][%d], the Array of element is: %d \n", i,j, *(*(p+i)+j));

            // printf("At index a[%d][%d], the Array of element is: %d \n", i,j, *(a[i] + j));
            // printf("At index a[%d][%d], the Array of element is: %d \n", i,j, *(p[i] + j));



        }
    }



}
    
   
   */





   // enter array of 2d element in compile time


    void main() {

    int a[3][3];

    int *p;

    // p = &a[0][0];

    p = a[0];

    int i, j, row, clos;

    printf("Enter the elements of the 2D array: \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", (*(a+i)+j)); 
        }
    }

    printf("Enter the elements of the 2D array: %d \n", **a);
    printf("Enter the elements of the 2D array: %d \n", **a);


    // a[1] + 1 and &a[1] + 1 gives you the complete different array address
    // because a[1]+1 => gives the address of second element of the index 1st

    // and &a[1] + 1 => it will gives the complete address of 1th index array + data types of 1D array
    printf("Enter the elements of the 2D array: %p \n", a[1]+1);
    printf("Enter the elements of the 2D array: %p \n", &a[1] + 1);


    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            // printf("At index a[%d][%d], the Array of element is: %d \n", i,j, a[i][j]);
            printf("At index a[%d][%d], the Array of element is: %d \n", i,j, *(*(a+i)+j));
            // printf("At index a[%d][%d], the Array of element is: %d \n", i,j, *(a[i] + j));


        }
    }

//

}