#include<stdio.h>
#include<stdlib.h>
#define N 50

void main() {
    int a[N][N], r,c;
    int i,j, k, sum=0, det=0;

    printf("Enter the row and col of Matrix A: \n");
    scanf("%d%d", &r, &c);


    if(r!=c){
        printf("matric must be square matrix to calculate determinant! \n");
        exit(1);
    }
    
    printf("Enter the elemnts of %dx%d Matrix A: \n", r,c);
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }




    printf("Element of Matrix A: \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");

    }

    det = (a[0][0]*a[1][1]) - (a[0][1]*a[1][0]);

    printf("determinant of matrix A is:%d \n", det);







}