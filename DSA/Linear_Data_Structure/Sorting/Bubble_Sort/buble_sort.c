#include <stdio.h>
#include <stdlib.h>

void main()
{

    int a[8] = {15, 5, 20, 35, 2, 42, 67, 17};

    int i, j, k;

    int n=8;

    int temp = 0;

    for(i=0; i<n-1; i++){
        for(j=0; j<n-1; j++){

            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("The sorted array using bubble sort is: \n");

    for(k=0; k<8; k++){
        printf("Array element: %d\n", a[k]);
    }

}