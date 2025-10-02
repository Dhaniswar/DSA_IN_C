#include<stdio.h>
#include<stdlib.h>



void main() {

    int x =10;
    int y = 11;

    y = x++;
    printf("%d\n", x);
    printf("%d\n", y);

}