#include<stdio.h>
#include<stdlib.h>



void add_two_num(int *a, int *b, int *sum){

    *sum = *a+*b;

}




void main() {


    int m,n;
    printf("Enter the forst number: \n");
    scanf("%d", &m);
    printf("Enter the second number: \n");
    scanf("%d", &n);

    printf("Value of n before update: %d\n", m);

    int sum =0;


    add_two_num(&m,&n, &sum);

    printf("Sum of two number is : %d\n", sum);



    int a=10, b=20, *p, *q;

    p=&a;
    q=&b;

    *p=*q;

   printf("The values of a=%d, q=%d, and *p=%d\n", a, *p, *q);


}
