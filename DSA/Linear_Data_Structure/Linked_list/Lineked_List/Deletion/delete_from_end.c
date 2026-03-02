#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int data;
    struct node *next;
};


struct node *create_linked_list()
{

    struct node *head=NULL, *newnode, *temp=NULL;

    char choice[10];

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

    } while (strcmp(choice, "yes") == 0 || strcmp(choice, "Yes") == 0);

    return head;
}



struct node *delete_from_end(struct node *head)
{

    struct node *temp, *second_last;

    if (head == NULL)
    {
        printf("List is empty! .\n");
        return NULL;
    }

    if(head->next == NULL){
        printf("Deleted node with data: %d (only node)\n", head->data);
        free(head);
        return NULL;
    }

  
    temp = head;

    while(temp->next !=0){
            second_last = temp;
            temp = temp->next;
    }
    second_last->next = NULL;
    printf("Successfully deleted node from the End\n");

    free(temp);

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

    head = create_linked_list();

    printf("Original list: \n");
    display_list(head);

    head = delete_from_end(head);

    printf("List after deletion: \n");
    display_list(head);

    free_list(head);

    return 0;
}