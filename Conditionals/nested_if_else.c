#include<stdio.h>
#include<stdlib.h>

/*
Write the programme to fint the maximum number among 3 number using nested if else

*/

void main() {

    int a,b,c;
    printf("Enter the three number: \n");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b) {
        if(a>c) {
            printf("A is the maximun number: a=%d\n", a);
        }
        else if(c>b){
            printf("C is the maximun number: b=%d\n", c);
        }
    }

    else if(b>c){
        printf("B is the maximun number: b=%d\n", b);
    }

    else{
        printf("C is the maximun number: c=%d\n", b);
    }
    
}