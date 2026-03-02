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

Tail recursion is defined as a recursive function in which the recursive call is the last statement that is executed by the function.
So basically nothing is left to execute after the recurs
}
*/


void print(int a){
    int count = 0;
    if(a<1){
        return ;
    }

    else{
        
        printf("%d\n",a);
        print(a/2);
    }
}


void main() {


    print(10);

} 