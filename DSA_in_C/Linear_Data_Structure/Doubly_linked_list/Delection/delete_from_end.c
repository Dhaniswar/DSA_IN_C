#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*
Creating the Doubly linked list

Delete from the end in the Doubly linlked list
*/

struct node {

    struct node *previous;
    int data;
    struct node* next;

};


struct node *create_doubly_linked_list(struct node *head, struct node **tail){
     struct node  *newnode=NULL;

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
            head=*tail=newnode;
        }

        else{
            (*tail)->next = newnode;
            newnode->previous = *tail;
            *tail = newnode;
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



// Delete from the end in the Doubly linlked list
struct node *delete_from_the_end(struct node *head, struct node **tail){

    struct node *temp;


    // If list is empty
    if(head == NULL) {
        printf("Empty list, there is nothing to delete!\n");
        return head;
    }


    if(tail !=NULL){
        temp= *tail;

        (*tail)->previous->next = NULL; 
        *tail = (*tail)->previous;
        free(temp);
    }

    printf("Node deleted successfully from the end!\n");
    return head;

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

    struct node *head=NULL, *tail=NULL;

    head = create_doubly_linked_list(head, &tail);

    printf("Original linked list: \n");
    display_doubly_linked_list(head);


    head = delete_from_the_end(head, &tail);
    printf("linked list after deleting from the end: \n");
    display_doubly_linked_list(head);


    free_list(head);

    return 0;
}