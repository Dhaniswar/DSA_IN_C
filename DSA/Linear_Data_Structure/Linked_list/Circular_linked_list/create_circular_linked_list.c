#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Creating the Circular linked list

Insert a node after given position in the Circular linlked list
*/

/*

struct node {

    int data;
    struct node* next;

};

int count = 0;



struct node *create_Circular_linked_list(struct node *head, struct node **tail){
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
        newnode->next = NULL;

        if(head==NULL){
            head=*tail=newnode;
            newnode->next = head;
        }

        else{
            (*tail)->next = newnode;
            *tail = newnode;
        }
        (*tail)->next = head;

        printf("Do you want to continue? (yes/no): ");
        scanf("%s", choice);
        count++;

     } while(strcmp(choice, "yes") == 0 || strcmp(choice, "Yes") == 0 );

     return head;
}




void display_Circular_linked_list(struct node *head){
    struct node *temp=NULL;

    if(head==NULL) {
        printf("Empty list!\n");
        return;
    }

    temp= head;
    while(temp->next != head){
        printf("Data=%d, and Next=%p\n",temp->data, temp->next);
        temp= temp->next;
    }
    printf("Data=%d, and Next=%p\n",temp->data, temp->next);
    printf("Verify circular linked list Data=%d\n",temp->next->data);



}



void free_list(struct node *head, struct node **tail) {

    if(head==NULL){
        return;
    }

    struct node *to_free;

    struct node *current = head;

    (*tail)->next = NULL;

    while(current !=NULL){
        to_free = current;
        current = current->next;
        free(to_free);
    }

}



int main() {

    struct node *head=NULL, *tail=NULL;

    head = create_Circular_linked_list(head, &tail);

    printf("Original linked list: \n");
    display_Circular_linked_list(head);


    free_list(head, &tail);

    head=NULL;

    return 0;
}









*/

struct node
{
    int data;
    struct node *next;
};


void display_circular_list(struct node *head){
    struct node *current;

    current = head;

    while(current->next !=head){
        printf("Data=%d, and Next=%p\n",current->data, current->next);
        current= current->next;
    }
    printf("Data=%d, and Next=%p\n",current->data, current->next);
    printf("Verify circular linked list Data=%d\n",current->next->data);


}

void free_list(struct node *head){

    struct node *current;
    struct node *to_free;

    current = head;

    while(current->next !=head){
        current= current->next;
    }
    current->next= NULL;

    current = head;
    while(current !=NULL){
        to_free = current;
        current = current->next;
        free(to_free);
    }

}


int main()
{

    struct node *head = NULL, *current = NULL, *newnode = NULL;

    char choice[10];

        do
    {

        newnode = (struct node *)malloc(sizeof(struct node));

        if (newnode == NULL)
        {
            printf("Memory allocation failed");
            return 0;
        }
        printf("Enter the data: \n");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
        {
            current = head = newnode;
        }

        else
        {
            current->next = newnode;
            current = newnode;
        }
        current->next = head;

        printf("Do you want to continue: (yes,no)\n");
        scanf("%s", choice);

    }while (strcmp(choice, "yes")== 0 || strcmp(choice, "Yes") == 0);


    display_circular_list(head);
    free_list(head);


    head = NULL;

    return 0;
}
