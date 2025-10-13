#include<stdio.h>
#include<stdlib.h>


struct node {

    int data;
    struct node * next;

};




int main() {


    struct node *head, *newnode, *temp;
    head =0;
    int choice = 1;

    while(choice) {
    newnode =(struct node*)malloc(sizeof(struct node));
    printf("Enter data: \n");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    if(head==0){
        head = temp = newnode;
    }

    else {
        temp->next=newnode;
        temp=newnode;
    }


    printf("Do you want to continue: (0,1)\n");
    scanf("%d", &choice);

    }
    temp = head;
    while(temp !=0) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    free(newnode);
    newnode=NULL;

    return 0; 
}