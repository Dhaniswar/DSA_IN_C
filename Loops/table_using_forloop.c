#include<stdio.h>
#include<stdlib.h>

/*
There are different way to write the for loops
all the three expretion are optional but two semicollon are must

*/




void main() {



    int i, n;
    printf("Enter the number, you want to print the table: \n");
    scanf("%d", &n);

    printf("Table of %d is displayed below: \n", n);
    // for(i=n; i<=n*10; i=i+n){
    //     printf("%d\n", i);
    // } OR

        for(i=1; i<=10; i++){
        // printf("%d\n", n*i);
        printf("%dx%d = %d\n",n,i, n*i);

    }


}