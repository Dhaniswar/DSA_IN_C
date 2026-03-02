#include<stdio.h>
#include<stdlib.h>


/*
//Associvity of these relational operator is left to right
// higer priority at first
"
<
>
<=
=>
"
lower priority at second
"
==
!=

"


// Airthmetic operator is having higher priority than relational operator 


<
>
<=
=>
==
!=

*/



/*

void main() {

    int a =18;
    int b=9;



    printf("%d\n",a<b);
    printf("%d\n",a>b);
    printf("%d\n",'c'<'b'); //ASCII of c=99 and b=98 so it will return flase=>0


}

*/


void main() {

    int a=18, b=9, c, d, e=10;
    c = b++;
    d=b;


    printf("%d\n",a<b<c>d);
    printf("%d\n",b==e);
    printf("%d\n",c+1>e); 
    printf("%d\n", a+c==b>e<c+d); 

    printf("%d\n", a+c==b>=e<c+d !=1); 




}