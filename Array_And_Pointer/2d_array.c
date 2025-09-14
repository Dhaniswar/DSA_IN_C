#include<stdio.h>




/*

1. 2D array is also known as matrix
2. 2D array is also called array of array

# different ways of array initilization

    int a[2][3] = {1,2,3,4,5,6};

    int a[2][3] = {{1,2,3}, {4,5,6}}

    int a[][3] = {}

    but you can not do this 

    int a[2][] = {}

*/


/*
// 1. Accessing the element of 2D array


void main() {

    int a[2][3] = {
                    {1,2,3},
                    {4,5,6}
                };

    int i, j;

    for(i=0; i<2; i++) {

        for(j=0; j<3; j++) {

            printf("at index: a[%d][%d], element of array is: %d\n",i,j, a[i][j]);


        }
    }

}




*/






// input 2D array element from keboard

void main() {

    int a[2][3] = {
                    {1,2,3},
                    {4,5,6}
                };

    int i, j;

    printf("Please enter the 2x3 array elements: \n");
    for(i=0; i<2; i++) {

        for(j=0; j<3; j++) {

            scanf("%d", &a[i][j]);
            

        }
    }


    for(i=0; i<2; i++) {

        for(j=0; j<3; j++) {
            
            printf("at index: a[%d][%d], element of array is: %d\n",i,j, a[i][j]);


        }
    }

}



/*

# how to store 2D array in memory, there are 2 methods

a). Row Major 

b). Column Major

#Row Major
i). first of all first row is to be stored,
ii). after that next row is sored (the have to be stored in continous location)


#Column Major
i). first of all the column major is to be stored in the memory.
ii). 

Note: By default we use row Major implementation

*/



/*
1. How to calculate the address of particular element of 2D array in Row Major

a = [
    [1,2,3],
    [4,5,6]
    ]mxn

formula is,

i). if array index is starting from 0,

a[1][1]= 5, => Base address + ((1*3) + (1*1)) * (Size of data types) 

            => Base Address + ((i*n) + j) * size

ii). if array index is starting from 1,

            => Base Address + ((i-1)*n +(j-1)) * size
=> 


2. How to calculate the address of particular element of 2D array in column Major

i). if array index is starting from 0,

a12 = Base address + ((2*2) + 1) * size of data types)

Where, n= no. of row and m = no. of columns

a[i][j] = Base address + ((j*m)+i) * size of data types)

ii). if array index is starting from 1,

a[i][j] = Base address + (((j-1)*m)+(i-1)) * size of data types


a23 = 100 + 5 *4 =>120

a13 = 100 + 4*4 => 116

a21 = 100 + 1*4 => 104

a22 = 100 + 3*4 => 112
*/