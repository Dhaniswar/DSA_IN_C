#include<stdio.h>
#include<stdlib.h>
#define N 50

void main() {
    int a[N][N], transpose[N][N], r,c;
    int i,j, k, sum=0;

    printf("Enter the row and col of Matrix A: \n");
    scanf("%d%d", &r, &c);

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


    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            transpose[j][i] = a[i][j];
        }
        printf("\n");

    }







    printf("Transpose of matrix a is:\n");
    for(i=0; i<c; i++){
        for(j=0; j<r; j++){
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

}