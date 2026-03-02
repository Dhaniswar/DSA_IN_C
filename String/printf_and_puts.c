#include<stdio.h>
#include<stdlib.h>





/*
// to address the drawback of scanf() and gets() function we use fgets(), fputs()

// printf() and puts() finction are used to print the string on the screen
// putchar() is used to print the single character on the screen


*/



/*

void main() {

char name[30];
printf("Enter string: \n");

// scanf("%s", name);


// scanf("%s", s1); // if I input Dhaniswar B K then it will only print Dhaniswar

gets(name); // in gets() function you only pass string name

puts(name); // liskewise as gets() in puts() you only need to pass string name to print on screen
// puts() will autometically add new line operator when the end of sting

// printf("String is : %.5s\n", name); //it will print only first 5 character
// printf("String is : %10.5s\n", name); // then it will print after 5 white space


}


*/




/*
void main() {

char name[30];
printf("Enter string: \n");

gets(name); // in gets() function you only pass string name

printf("Print string from index 3: %s\n", &name[3]);


}


*/






void main() {

char Fname[30], Lname[30];

printf("Enter the full name: \n");
scanf("%s%s", Fname, Lname);// Rather than using scanf() you should use gets() senario like this

printf("%s %s\n", Fname,Lname);


}
