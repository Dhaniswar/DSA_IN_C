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

int count = 1;

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
        newnode->next = newnode->previous = newnode;
    }

    else{
        (*tail)->next = newnode;
        newnode->previous = *tail;
        newnode->next = head;
        head->previous = newnode;
        *tail = newnode;
    }

    
    printf("Do you want to continue? (yes/no): ");
    scanf("%s", choice);
    count++;

    }while(strcmp(choice, "yes") == 0 || strcmp(choice, "Yes") == 0);

    return head;

}


struct node *insert_at_the_beginning(struct node *head, struct node **tail){
    struct node *newnode;

    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Memory allocation failed!\n");
        return head;
    }

    printf("Insert data at the beginning: \n");
    scanf("%d", &newnode->data);
    newnode->previous = NULL;
    newnode->next = NULL;

    if(head==NULL){
        head=*tail=newnode;
        newnode->next = newnode->previous = newnode;
    }

    else{
        head->previous->next = newnode;
        newnode->previous = head->previous;
        newnode->next = head;
        head->previous = newnode;
        head = newnode;

    }

  
    return head;

}





struct node *insert_at_the_end(struct node *head, struct node **tail){
    struct node *newnode;

    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Memory allocation failed!\n");
        return head;
    }

    printf("Insert data at the end: \n");
    scanf("%d", &newnode->data);
    newnode->previous = NULL;
    newnode->next = NULL;

    if(head==NULL){
        head=*tail=newnode;
        newnode->next = newnode->previous = newnode;
    }

    else{
        newnode->previous = *tail;
        newnode->next = head;
        (*tail)->next = newnode;
        head->previous = newnode;
        *tail = newnode;
    }

  
    return head;

}








struct node *insert_at_any_given_pos(struct node *head, struct node **tail){
    struct node *newnode, *temp;
    int pos, i=1;

    temp = head;

    printf("Enter the position where do you want to insert:\n ");
    scanf("%d", &pos);

    if(pos < 1 || pos> count + 1){
        printf("please enter the valid position from 1 to %d: \n", count+1);
        return head;
    }

    if(pos==1){
        head = insert_at_the_end(head, tail);
        count++;
        return head;
    }

    else if(pos==count + 1){
        head = insert_at_the_end(head, tail);
        count++;
        return head;
    }



    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Memory allocation failed!\n");
        return head;
    }

    printf("Insert data at the end: \n");
    scanf("%d", &newnode->data);
    newnode->previous = NULL;
    newnode->next = NULL;

    if(head==NULL){
        head=*tail=newnode;
        newnode->next = newnode->previous = newnode;
    }

    else{

        while(i<pos-1){
            temp = temp -> next;
            i++;
        }

        newnode->previous = temp;
        newnode->next = temp->next;
        temp->next->previous = newnode;
        temp->next = newnode;
    }

    count++;

  
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
        while(temp != head); //even we can replace head with (*tail)->next
        printf("Verify circular linked list Data=%d\n",(*tail)->next->data);
        printf("Verify circular linked list Data=%d\n",head->previous->data);
    }

}



void free_list(struct node *head, struct node **tail) {

    if(head==NULL){
        return;
    }

    struct node *temp, *current;

    current = head;

    do{
        temp=current;
        current=current->next;
        free(temp);
    }while(current !=head);

    *tail = NULL;

}






int main(){

    struct node *head=NULL, *tail=NULL;

    head = create_doubly_circular_linked_list(head, &tail);

    printf("Original Doubly circular linked list: \n");
    display_doubly_circular_linked_list(head, &tail);

    // head = insert_at_the_beginning(head, &tail);

    // printf("Doubly circular Linked list after inserting in the beginning: \n");
    // display_doubly_circular_linked_list(head, &tail);

    // head = insert_at_the_end(head, &tail);

    // printf("Doubly circular Linked list after inserting in the end: \n");
    // display_doubly_circular_linked_list(head, &tail);


    head = insert_at_any_given_pos(head, &tail);

    printf("Doubly circular Linked list after inserting in the end: \n");
    display_doubly_circular_linked_list(head, &tail);

    
    free_list(head, &tail);



    return 0;
}