#include<stdio.h>
#include<stdlib.h>




/*

void main() {


    // int a[][3] = {1,1,1};
    int a[][3] = {1,1,1,2};

    int i,j;


    printf("Please Enter the element of Array a:\n");

    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

  


}

*/




/*

void main() {


    // int a[][3] = {1,1,1};
    int a[2][3];
    int i,j, sum=0;

    printf("Enter the Element of 2X3 array: \n");

    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Element of 2X3 array: \n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d\t", a[i][j]);
            sum +=a[i][j];
        }
        printf("\n");

    }

    printf("Sum of of 2X3 array:%d \n", sum);
  

}


*/





/*



//Transpose of matrix

void main() {


    int a[2][3], transpose[3][2];
    int i,j;

    printf("Enter the Element of 2X3 array: \n");

    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Entered element of 2X3 array: \n");
        for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    //Calculating the furmula for transpose of matrix
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            transpose[i][j]=a[j][i];
        }
    }

    printf("Transpose of matrix is displayed below\n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
        printf("%d\t", transpose[i][j]);
        
        }
        printf("\n");
    }


}

*/




//Sum of individuals row and cloumns of matrix

void main() {


    int a[3][3], row1_sum[3], col_sum[3], sumr=0, sumc=0;
    int i,j;

    printf("Enter the Element of 2X3 array: \n");

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Entered element of 2X3 array: \n");
        for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    //Calculating the sum for individuals row and clos of matrix
    for(i=0; i<3; i++){
        sumr=0;
        sumc=0;
        for(j=0; j<3; j++){
            sumr += a[i][j];
            sumc += a[j][i];
        }
        row1_sum[i] = sumr;
        col_sum[i]  = sumc;
    } 

    printf("Sum of individual row \n");
    for(i=0; i<3; i++){
       
        printf("sum of %dth row=> %d\t",i, row1_sum[i]);
        
    }

    printf("Sum of individual cols \n");
    for(i=0; i<3; i++){
       
        printf("sum of %dth col=> %d\t",i, col_sum[i]);
        
    }

}