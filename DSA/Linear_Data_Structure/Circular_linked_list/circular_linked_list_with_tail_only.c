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


    free_list(tail);

    tail=NULL;

    return 0;
}


 