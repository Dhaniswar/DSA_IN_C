#include<stdio.h>
#include<stdlib.h>


/*

struct Student{

int id;
char name[30];
float marks;

} // here int id is not variable it is called structure member

struct Student s1; // s1 is the structure variables

struct Student s1[3];


*/

struct Student{

int id;
char name[30];
float marks;

};


/*

void main() {

    struct Student s[2];
    int i, n;

    for(i=0; i<2; i++){
        printf("Enter the details of %d student\n", i);

        scanf("%d %s %f", &s[i].id, s[i].name, &s[i].marks);
    }


    for(i=0; i<2; i++){
        printf("%d student details \n", i);
    
        printf("%d, %s, %f\n", s[i].id, s[i].name, s[i].marks);
    }

}

*/






void main() {

    int i, n;

    printf("Enter the how many no of information of student: \n");
    scanf("%d", &n);

    struct Student* s;

    s = (struct Student*)malloc(n*sizeof(struct Student));

    if(s==NULL){
        printf("memory is not allocated\n");
        exit(1);
    }




    for(i=0; i<n; i++){
        printf("Enter the details of %d student\n", i);

        scanf("%d %s %f", &s[i].id, s[i].name, &s[i].marks);
    }


    for(i=0; i<n; i++){
        printf("%d student details \n", i);
    
        printf("%d, %s, %f\n", s[i].id, s[i].name, s[i].marks);
    }

    free(s);
    s =NULL;

}