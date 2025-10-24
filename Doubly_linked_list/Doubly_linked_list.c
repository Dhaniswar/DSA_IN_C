#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*
Creating the Doubly linked list

In Doubly linked list we can traverse the lisnked list in both froward and backward direction
*/

struct node {

    struct node *previous;
    int data;
    struct node* next;

};


struct node *create_doubly_linked_list(struct node *head){
     struct node  *temp=NULL, *newnode=NULL;

     char choice[10];

     do{
        newnode= (struct node*)malloc(sizeof(struct node));

        if(newnode==NULL){
            printf("Memory Allocation Failed!\n");
            return head;
        }

        printf("Enter the data: \n");
        scanf("%d", &newnode->data);
        newnode->previous = NULL;
        newnode->next = NULL;

        if(head==NULL){
            head=temp=newnode;
        }

        else{
            temp->next = newnode;
            newnode->previous = temp;
            temp = newnode;
        }
        printf("Do you want to continue? (yes/no): ");
        scanf("%s", choice);
        
     } while(strcmp(choice, "yes") == 0 || strcmp(choice, "Yes") == 0 );

     return head;
}

void display_doubly_linked_list(struct node *head){
    struct node *temp=NULL;

    if(head==NULL) {
        printf("Empty list!\n");
        return;
    }

    temp= head;
    while(temp !=0){
        printf("Previous=%p, Data=%d, and Next=%p\n", temp->previous, temp->data, temp->next);
        temp= temp->next;
    }

}

void free_list(struct node *head) {

    struct node *temp;


    while(head !=0){
        temp=head;
        head= head->next;
        free(temp);
    }

}



int main() {

    struct node *head=NULL, *temp=NULL;

    head = create_doubly_linked_list(head);

    printf("Original linked list: \n");
    display_doubly_linked_list(head);

    free_list(head);

    return 0;
}