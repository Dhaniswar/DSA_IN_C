#include<stdio.h>
#include<stdlib.h>



/*


void main() {

    char name[10] = {'D', 'H', 'A', 'N', 'I', 'S', 'H', '\0'};
    char m = 'A';

    printf("ASCI value of A is: %d\n", m);

    char name[10] = "Dhaniswar";

    int i;

    for(i=0; i<10; i++){
        printf("Character of ASCI value in my name is: %d\n", name[i]);
    }


        for(i=97; i<123; i++){
        printf("%c\n", i);
    }


}


*/



/*
// scanf() AND gets() input string in compile time
// Using scanf() for input string in c, the drawback of this is scanf function do not consider white space in string  )

// so we use gets() function to input string in compile time
-> gets() will read the complete line including white space until you press the neu line or enter

// Both scanf and gets() function has drawback of "buffer overflow" 
// One alternative for scanf() is scanf("%5s", s1); then it will only store 5 character string

*/


void main() {

char name[30];

printf("Enter string: \n");
// scanf("%s", s1); // if I input Dhaniswar B K then it will only print Dhaniswar

gets(name);

printf("String is : %s\n", name);


}






/*

void main() {

//comparing 2 string

char str1[] = "Dhaniswar";
// char str2[] = "Dhaniswar";

char rev[10];

int i, j;

for(i=10; i>0; i--) {
    if(str1[i] != '\0') {

        rev[i] += rev[i];

        

    }

}


for(i=0; i<10; i++) {

    printf("Reverse of the string is: %c\n", rev[i]);


}



}



*/