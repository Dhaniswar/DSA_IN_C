#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Creating the Circular linked list only maintaining the  tail pointer

Insert a node after given position in the Circular linlked list
*/


struct node {

    int data;
    struct node* next;

};

int count = 0;



struct node *create_Circular_linked_list(struct node *tail){
     struct node  *newnode=NULL;

     char choice[10];

     do{
        newnode= (struct node*)malloc(sizeof(struct node));

        if(newnode==NULL){
            printf("Memory Allocation Failed!\n");
            return tail;
        }

        printf("Enter the data: \n");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if(tail==NULL){
            tail=newnode;
            (tail)->next = newnode;
        }

        else{
            newnode->next = (tail)->next;
            (tail)->next = newnode;
            tail = newnode;
        }

        printf("Do you want to continue? (yes/no): ");
        scanf("%s", choice);
        count++;

     } while(strcmp(choice, "yes") == 0 || strcmp(choice, "Yes") == 0 );

     return tail;
}


struct node *insert_at_beginning(struct node *tail){
    struct node *temp=NULL, *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));
 
    if(tail==NULL) {
        printf("Empty list!\n");
        return tail;
    }

       if(newnode==NULL){
        printf("Memory allocation failed!\n");
        return tail;
    }


    else{
        
        printf("Insert the data at beginning: \n");
        scanf("%d", &newnode->data);
        newnode->next = tail->next;
        tail->next = newnode;

        return tail;

    }

}


struct node *insert_at_the_end(struct node *tail){
    struct node *temp=NULL, *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));
 
    if(tail==NULL) {
        printf("Empty list!\n");
        return tail;
    }

       if(newnode==NULL){
        printf("Memory allocation failed!\n");
        return tail;
    }


    else{
        
        printf("Insert the data at the end: \n");
        scanf("%d", &newnode->data);

        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;

        return tail;

    }

}



struct node *insert_at_any_given_pos(struct node *tail){
    struct node *temp=NULL, *newnode, *previous;
    int pos, i=1;

    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter the position where do you want to insert: \n");
    scanf("%d", &pos);
 
    if(tail==NULL) {
        printf("Empty list!\n");
        return tail;
    }
    

       if(newnode==NULL){
        printf("Memory allocation failed!\n");
        return tail;
    } 
    
    if(pos>count || pos<1){
        printf("Please enter the valid position from 1 to %d",count);
        return tail;
    }


    else{
        temp = tail->next;
        while(i<pos){
            previous = temp;
            temp=temp->next;
            i++;
        }
        printf("Insert the data at the %d position: \n", pos);
        scanf("%d", &newnode->data); 

        previous->next = newnode;
        newnode->next = temp;

        return tail;

    }

}






void display_Circular_linked_list(struct node *tail){
    struct node *temp=NULL;

    if(tail==NULL) {
        printf("Empty list!\n");
        return;
    }

    temp= tail->next;
    while(temp->next != tail->next){
        printf("Data=%d, and Next=%p\n",temp->data, temp->next);
        temp= temp->next;
    }
    printf("Data=%d, and Next=%p\n",temp->data, temp->next);
    printf("Verify circular linked list Data=%d\n",temp->next->data);



}



void free_list(struct node *tail) {

    if(tail==NULL){
        return;
    }

    struct node *to_free;

    struct node *current = tail;

    tail->next = NULL;

    while(current !=NULL){
        to_free = current;
        current = current->next;
        free(to_free);
    }

}



int main() {

    struct node *tail=NULL;

    tail = create_Circular_linked_list(tail);

    printf("Original linked list: \n");
    display_Circular_linked_list(tail);

    tail = insert_at_beginning(tail);

    printf("Linked list after inserting at the beginning: \n");
    display_Circular_linked_list(tail);

    tail = insert_at_the_end(tail);

    printf("Linked list after inserting at the end: \n");
    display_Circular_linked_list(tail);

    tail = insert_at_any_given_pos(tail);
    printf("Linked list after inserting in the given position: \n");
    display_Circular_linked_list(tail);




    free_list(tail);

    tail=NULL;

    return 0;
}


 