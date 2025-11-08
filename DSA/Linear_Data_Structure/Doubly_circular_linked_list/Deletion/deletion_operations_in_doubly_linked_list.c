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

int count = 0, pos;

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


struct node *delete_from_the_beginning(struct node *head, struct node **tail){
    struct node *temp;
    temp=head;

    if(head==NULL){
        printf("Emplty list!\n");
        return head;
    }
    
    if(head->next == head){
        free(head);
        head=*tail=NULL;
        count=0;
        return head;
    }

    else{
        
        temp->next->previous=*tail;
        (*tail)->next = temp->next;
        head = temp->next;
    }

    count--;
    free(temp);

  
    return head;

}


struct node *delete_from_the_end(struct node *head, struct node **tail){
    struct node *temp;
    temp=*tail;

    if(head==NULL){
        printf("Emplty list!\n");
        return head;
    }

    if(head->next == head){
        free(head);
        head=*tail=NULL;
        count=0;
        return head;
    }

    else{
        
        temp->previous->next=(*tail)->next;
        head->previous = (*tail)->previous;
        *tail = (*tail)->previous;
    }

    free(temp);
    count--;
  
    return head;

}



struct node *delete_from_any_given_pos(struct node *head, struct node **tail){
    struct node *temp;
    int i=1;

    temp = head;

    printf("Enter the position where do you want to delete:\n ");
    scanf("%d", &pos);

    if(pos < 1 || pos> count){
        printf("please enter the valid position from 1 to %d: \n", count);
        return head;
    }

    if(pos==1){
        head = delete_from_the_beginning(head, tail);
        return head;
    }

    else if(pos==count){
        head = delete_from_the_end(head, tail);
        return head;
    }


    if(head==NULL){
        printf("Emplty list!\n");
        return head;
    }

    else{

        while(i<pos){
            temp = temp -> next;
            i++;
        }

        temp->previous->next = temp->next;
        temp->next->previous = temp->previous;

        free(temp);

    }

    count--;

  
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

    head = delete_from_the_beginning(head, &tail);

    printf("Doubly circular Linked list after deleting from the beginning: \n");
    display_doubly_circular_linked_list(head, &tail);

    head = delete_from_the_end(head, &tail);

    printf("Doubly circular Linked list after deleting from the end: \n");
    display_doubly_circular_linked_list(head, &tail);


    head = delete_from_any_given_pos(head, &tail);

    printf("Doubly circular Linked list after deleting from %d position: \n", pos);
    display_doubly_circular_linked_list(head, &tail);

    
    free_list(head, &tail);



    return 0;
}