#include<stdio.h>

/*
1. Array is a fixed sequenced collection of data items of same data type

2. Access a particular elemeny : ArrayNamr[index]

3. Data items are stored in continuous locations

4. Randam access taking constant time O(1)


# Types of array

a). 1D Array

b). 2D Array

c). 3D Array(multidimentional array)

*/





void main() {


    int a[5] = {6,2,4,3,0}; //array  of integers

    char b[10] = {'a','b','c','d','e','f','g','h', 'i','j'}; // array of character




    int m[5], i;

    printf("Enter the elements of the array: \n");

    for(i=0; i<5; i++) {

        scanf("%d", m);

    }

    for(i=0; i<5; i++) {

        printf("%dth index element of array: %d\n",i, m[i]);
    }




}


