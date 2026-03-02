#include<stdio.h>
#include<stdlib.h>

/*

when function call itself directly or indirectly is called recursion.

in recursion we need to have base/termination condition, otherwise it will run that program infinite times

There are basically 4 types recursion
a). Direct recursion
b). Indirect recursion
c). tail recursion
d). Non tail recursion
e). linear recursion
f) Non- liner recursion
*/



/*

// Example of Direct recursion, because it is calling itself directly

//the function is called direct recursive if it called directly

int factorial(int n){
    int count = 0;
    if(n==1 || n==0){
        return 1;
    }

    else{
        
        return n*factorial(n-1);
    }
}
*/




/*

// Example of Indirect recursion

//When a function  called occurs in a circular phasion that is known as indirect recursive


fun1() {

fun2();

}

fun2(){

fun1();
}
*/





int factorial1(int n){
    int count = 0;
    if(n==1 || n==0){
        return 1;
    }

    else{
        
        return n*factorial2(n-1);
    }
}


int factorial2(int n){

    if(n==1 || n==0){
        return 1;
    }

    else{
        
        return n*factorial1(n-1);
    }
}



void main() {


    printf("%d\n", factorial1(5));

}