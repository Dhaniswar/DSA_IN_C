#include<stdio.h>
#include<stdlib.h>




void main() {



    int a[8] = {15,5,20,35,2,42,67,17};

    int i;

    int data=600;

    for(i=0; i<8; i++){
        if(a[i]==data){
            printf("Data found at Index: %d\n", i);
            break;
        }

    }
    if(i==8){
        printf("Element not fount! \n");
    }


}