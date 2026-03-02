#include<stdio.h>
#include<stdlib.h>

/*
There are different way to write the for loops
all the three expretion are optional but two semicollon are must

*/




void main() {

/*

    int i;

    for(i=0; i<5; i++){
        printf("%d\n", i+1);
    }

*/


/*
    
    int i =1;
        for(; i<=5; i++){
        printf("%d\n", i);
    }
*/



/*
// it will not give any output

    
    int i;
        for(; i<=5; i++){
        printf("%d\n", i);
    } 


*/

/*

// we can initialize more than 1 variable but seperate them with comma cause it shoud have only 2 semiclone

    int i, j, k, l;
        for(i=1, j=0, k=5, l=10; i<=5; i++, j++, k++, l++){
        printf("%d %d %d %d\n", i, j,k,l);
    } 

*/



/*
// we can initialize more than 1 variable but seperate them with comma cause it shoud have only 2 semiclone

    int i, j, k, l;
        for( l=10; l<=100; i++, j++, k++, l++){
        printf("%d %d %d %d\n", i, j,k,l);
    } 

*/


/*

// we can skip contitiion (but it will change to the infinite loop)

    int i, j;
        for(i=1, j=0; ; i++, j++){
        printf("%d %d\n", i, j);
    } 

*/


// We can have multiple condition but except of last condition all the other condition is consider as expression that is all the other condition does not have any effect on loop
/*


    int i, j;
        for(i=1, j=0; i<20, j<5; i++, j++){
        printf("%d %d\n", i, j);
    } 

*/


/*


// It wolud be a infinite loop, because it thread last condition as end point and thw value of j is always zero

    int i, j;
        for(i=1, j=0; i<20, j<5; i++){
        printf("%d %d\n", i, j);
    } 



*/



/*


    int i, j;
        for(i=1, j=0; i==10; i++, j++){
        printf("%d %d\n", i, j);
    } 


*/





/*
    int i, j;
        for(i=1, j=0; i<=100 && j<10; i++, j++){
        printf("%d %d\n", i, j);
    } 

*/


/*
// in the below code  i<=100 || j<3 these condition is consider as single condition

    int i, j;
        for(i=1, j=0; i<=100 || j<3; i++, j++){
        printf("%d %d\n", i, j);
    } 


*/



/*

// even we can write update expression inside body of the code

    int i, j;
        for(i=1, j=0; i<=100 || j<3;){
        printf("%d %d\n", i, j);
        i++;
        j++;
    } 


*/



/*
// if I skip update statement it will become infinite loop

    int i, j;
        for(i=1, j=0; i<=100, j<3;){
        printf("%d %d\n", i, j);
      
    } 

*/





/*

    int i, j;
        for(i=1, j=0; i<=100, j<3;){
        printf("%d %d\n", i, j);
        j++;
      
    } 


*/



/*

int i, a=5, b=7;

    for(i=(a+b); i<=100; i=i+2){
        printf("%d\n", i);
      
    } 

*/



/*

// Another example of infinite loops

for(; ;) {
    printf("Dhaniswar");
}


*/



/*

// Another example of infinite loops
int i=1;

for(; i<5 ;) {
    printf("Dhaniswar");
}


*/



/*

int i;

for(i=10; i>0; i--){
    printf("%d\n", i);

}

*/



/*

// in the below code body part will not act as loop body it will act as normal code but it will check condition
int i,j;

for(i=1, j=0; i<5, j<=6; i++, j++);
{
    printf("%d %d\n", i, j); // it would output i=8 and j=7

}

*/



/*

// in the below code body part will not act as loop body it will act as normal code but it will check condition, here we not have termination point so it will become the infinite loop
int i,j;

for(i=1, j=0; i<5, j<=6; i++);
{
    printf("%d %d\n", i, j); 
    j++;

}

*/



/*

// in the below code body part will not act as loop body it will act as normal code but it will check condition
int i,j;

for(i=1, j=0; i<5, j<=6; j++);
{
    printf("%d %d\n", i, j);  // i=1, and j=7
    i++;

}

*/



int i, j,k;

for(i=1, j=0, k=3; i<=5, j<=6, k>1; i++, j++, k--);
{
    printf("i=%d, j=%d, and k=%d\n", i,j,k);// output would be => i=3, j=2 and k=1
}


}