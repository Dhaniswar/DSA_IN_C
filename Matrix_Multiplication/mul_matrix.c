#include<stdio.h>
#include<stdlib.h>
#define N 50

void main() {
    int a[N][N], b[N][N], c[N][N], m,n,p,q;
    int i,j, k, sum=0;

    printf("Enter the row and col of Matrix A: \n");
    scanf("%d%d", &m, &n);

    printf("Enter the elemnts of %dx%d Matrix A: \n", m,n);
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the row and col of Matrix B: \n");
    scanf("%d%d", &p, &q);


    printf("Enter the elemnts of %dx%d Matrix A: \n", p,q);
    for(i=0; i<p; i++){
        for(j=0; j<q; j++){
            scanf("%d", &b[i][j]);
        }
    }

    printf("Element of Matrix A: \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");

    }

    printf("Element of Matrix B: \n");
    for(i=0; i<p; i++){
        for(j=0; j<q; j++){
            printf("%d\t", b[i][j]);
        }
        printf("\n");

    }

    if(n!=p){
        printf("Can not multiple this matrix: \n");
        exit(1);
    }


    for(i=0; i<m; i++){
        for(j=0; j<q; j++){
            sum=0;
            for(k=0; k<m; k++){
                sum = sum + a[i][k]*b[k][j];

            }
            c[i][j]=sum;
        }
    }





    printf("Multiplication of matrix axb is:\n");
    for(i=0; i<m; i++){
        for(j=0; j<q; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

}