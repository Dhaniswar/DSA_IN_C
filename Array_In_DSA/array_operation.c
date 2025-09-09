
#include <stdio.h>
#include <stdlib.h>

/**
 # Operation on Array in Data Structure

 1. Traversal

 2. Insertion

 3. Delection

 4. Searching

 5. Sorting

 **/

/**

//# 1. Traversal (An example of how to traversal the array in c programming)


void main() {

   int a[50], size, i;

   printf("Enter the size of array: \n");

   scanf("%d", &size);


   printf("Enter the element of array: \n");

   for(i=0; i<size; i++) {

       scanf("%d", &a[i]);
   }

   printf("Element of array is  given below: \n");

   for(i=0; i<size; i++) {

       printf("At index= %d the array element is: %d\n",i, a[i]);
   }

}


 **/

// # 1. Insertion (An example of how to Insertion the array in c programming)

/**



 void main() {

    int a[50], size, i, num, pos;

    printf("Enter the size of array: \n");

    scanf("%d", &size);

    if(size>50){
        printf("Stack overflow array size sholud be less that %d: \n", size);
    }

    printf("Enter the element of array: \n");

    for(i=0; i<size; i++) {

        scanf("%d", &a[i]);
    }

    printf("Enter the data you want to insert: \n");
    scanf("%d", &num);

    printf("Enter the position where you want to insert: \n");
    scanf("%d", &pos);

    if(pos<=0 || pos>size+1) {
        printf("Invalid position!");
    }


    else {

    for(i=size-1; i>=pos-1; i--) {
        a[i+1] = a[i];
    }

    a[pos-1] = num;
    size++;

    printf("Element of array is  given below: \n");

    for(i=0; i<size; i++) {

        printf("At index= %d the array element is: %d\n",i, a[i]);
    }
    }

 }



 */

// # 1. Deletion (An example of how to Deletion the array in c programming)


    
void main()
{

    int a[50], size, i, num, pos, item;

    printf("Enter the size of array: \n");

    scanf("%d", &size);

    if (size >= 50)
    {
        printf("Stack overflow array size sholud be less that: 50\n");
        exit(1);
    }

    printf("Enter the element of array: \n");

    for (i = 0; i < size; i++)
    {

        scanf("%d", &a[i]);
    }

    // printf("Enter the data you want to delete: \n");
    // scanf("%d", &num);

    printf("Enter the position where you want to delete: \n");
    scanf("%d", &pos);

    if (pos <= 0 || pos > size)
    {

        printf("Invalid position");
    }

    else
    {

        item = a[pos-1]
        for (i = pos - 1; i < size - 1; i++)
        {
            a[i] = a[i + 1];
        }
        size--;

        printf("Element of  updated array is  given below: \n");

        for (i = 0; i < size; i++)
        {

            printf("At index= %d the array element is: %d\n", i, a[i]);
        }

         printf("And the deleted element from array is:  %d\n", item);
    }

    /*
    Note: if you want to delete lement from first index of array, it is very simle 
    => hust change in the for loop 
    for(i=0; i<size-1; i++) {

        a[i] = a[i+1];
    
    }
    size --;
    
    Note: If you want to delete from end of the arry, just do 

    size -- 


    1. Time complexity O(n-p)
    */



}
