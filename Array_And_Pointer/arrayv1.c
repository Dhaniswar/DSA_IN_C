#include<stdio.h>
#include<stdlib.h>




/*

void main() {

    int marks[5];

    int i, sum=0, avg=0;

    printf("Please Enter the marks of 5 student\n");

    for(i=0; i<5; i++){
        scanf("%d", &marks[i]);
    }

        for(i=0; i<5; i++){

            sum +=marks[i];
            
    }

    avg =sum/5;

    printf("Sum=%d and Avg=%d \n", sum, avg);



}


*/



/*


void main() {

    int marks[10];

    int i, even=0, odd=0, evenarr[5], oddarr[5];

    printf("Please Enter the array element\n");

    for(i=0; i<10; i++){
        scanf("%d", &marks[i]);
    }

        for(i=0; i<10; i++){

            if(marks[i]%2!=0) {
                oddarr[i] = marks[i];
                odd++;
            }
            else{
                evenarr[i] = marks[i];
                even++;
            }
            
    }


    printf("Even=%d and Odd=%d \n", even, odd);

}


*/




void main() {


    int i,  a[5], b[5], ab_sum[5];

    printf("Please Enter the element of Array a:\n");

    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
    }

    printf("Please Enter the element of Array b:\n");

    for(i=0; i<5; i++){
        scanf("%d", &b[i]);
    }

    for(i=0; i<5; i++){

            ab_sum[i] = a[i] + b[i];
            printf("element of ab_sum=%d\n", ab_sum[i]);
            
    }


}