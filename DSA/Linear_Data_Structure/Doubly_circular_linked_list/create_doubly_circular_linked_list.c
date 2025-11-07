#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Creating Double circular linked list

*/

struct node {
    struct node *previous;
    int data;
    struct node *next;
};

int count = 0;

struct node *create_doubly_circular_linked_list(struct node *head, struct node **tail){
    struct node *newnode, *temp;

    char choice[10];

    do{

    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Memory allocation failed!\n");
        return head;
    }

    printf("Enter data: \n");
    scanf("%d", &newnode->data);
    newnode->previous = NULL;
    newnode->next = NULL;

    if(head==NULL){
        head=*tail=newnode;
        newnode->next = newnode;
    }

    else{
        (*tail)->next = newnode;
        newnode->previous = *tail;
        *tail = newnode;
    }
    newnode->next = head;
    head->previous = newnode;
    printf("Do you want to continue? (yes/no): ");
    scanf("%s", choice);
    count++;

    }while(strcmp(choice, "yes") == 0 || strcmp(choice, "Yes") == 0);

    return head;

}


void display_doubly_circular_linked_list(struct node *head, struct node **tail){
    struct node *temp;

    temp = head;

    if(head==NULL){
        printf("Emplty list!\n");
        return;
    }

    else{

        do{
            printf("Previous=%p, Data=%d, and Next=%p\n", temp->previous, temp->data, temp->next);
            temp= temp->next;
        }
        while(temp != head);
        printf("Verify circular linked list Data=%d\n",(*tail)->next->data);
        printf("Verify circular linked list Data=%d\n",head->previous->data);
    }

}



void free_list(struct node *head, struct node **tail) {

    struct node *temp;


    while(head != (*tail)->next){
        temp=head;
        head= head->next;
        free(temp);
    }

}






int main(){

    struct node *head=NULL, *tail=NULL;

    head = create_doubly_circular_linked_list(head, &tail);

    printf("Original linked list: \n");
    display_doubly_circular_linked_list(head, &tail);
    
    free_list(head, &tail);



    return 0;
}