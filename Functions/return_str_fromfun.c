#include<stdio.h>

/*
Return String from function

*/


char *display() // this is called function defination and inside it  are called formal parameter
{

    return "Dhaniswar";

}



void main() {

  
    char *str;

    str = display();

    printf("String is %s\n:", str);
    
}





