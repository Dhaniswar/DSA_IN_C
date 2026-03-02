#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
There are mainly 2 ways to reverse the linked list
1). Using Iteratative method( that is using loop)
2). Using Recursion

*/



//Using Iteratative method( that is using loop)

struct node
{
    int data;
    struct node *next;
};


struct node *create_linked_list(int *count)
{

    struct node *head=NULL, *newnode, *temp=NULL;

    char choice[10];
    *count=0;

    do
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL)
        {
            printf("Memory allocation failed!\n");
            return head;
        }

        printf("Enter the data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue? (yes/no): ");
        scanf("%s", choice);
        (*count)++;

    } while (strcmp(choice, "yes") == 0 || strcmp(choice, "Yes") == 0);

    return head;
}



void display_list(struct node *head)
{

    struct node *temp;

    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    temp = head;

    while (temp != NULL)
    {
        printf("data==%d, and next=%p\n", temp->data, temp->next);
        temp = temp->next;
    }
}



struct node *reverse_linked_list(struct node *head){

    struct node * prevnode, *currentnode, *nextnode;


    if (head == NULL) {
        printf("List is empty!\n");
        return NULL;
    }

    prevnode = NULL;
    currentnode = nextnode = head;

    while(nextnode !=0){
        nextnode= nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode; 
        currentnode = nextnode;
    }

    printf("Reverse list is: \n");
    display_list(prevnode);


    return prevnode;

}



void free_list(struct node *head)
{

    struct node *temp;

    while (head != 0)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}



int main()
{

    struct node *head = NULL;

    int count=0;

    head = create_linked_list(&count);

    printf("Original list (Total nodes: %d): \n", count);
    display_list(head);

    head = reverse_linked_list(head);

    free_list(head);

    return 0;
}