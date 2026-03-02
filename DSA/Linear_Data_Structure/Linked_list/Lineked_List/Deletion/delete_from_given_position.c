#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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



struct node *delete_from_given_position(struct node *head, int count)
{

    struct node *temp, *second_last=NULL;

    int position=0, i=1;

    if (head == NULL)
    {
        printf("List is empty! .\n");
        return NULL;
    }

    printf("Enter position to delete (1 to %d): ", count);
    scanf("%d", &position);

    if(head->next == NULL){
        printf("Deleted node with data: %d (only node)\n", head->data);
        free(head);
        return NULL;
    }



    if(position<1 || position>count){
        printf("Please Enter the valid position: \n");
        return head;
    }

    // Handle position 1 separately (delete first node)
    if (position == 1)
    {
        temp = head;
        head = head->next;
        printf("Deleted node at position %d with data: %d\n", position, temp->data);
        free(temp);
        return head;
    }


  
    
    temp = head;

    while(i<position && temp !=NULL){
            second_last = temp;
            temp = temp->next;
            i++;
    }

    second_last->next = temp->next;
    printf("Successfully deleted node from the %d position\n", position);

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

int get_lenght(struct node *head){

    struct node *temp;
    int length =0;

    if(head==NULL){
        printf("List is empty: \n");
        return;
    }

    else{
        temp=head;

        while(temp!=NULL){
            length++;
            temp = temp->next;
        }

        printf("Length of the given linked list is: %d\n", length);
    }

}


int main()
{

    struct node *head = NULL;

    int count=0;

    head = create_linked_list(&count);

    printf("Original list (Total nodes: %d): \n", count);
    display_list(head);

    head = delete_from_given_position(head, count);

    printf("List after deletion: \n");
    display_list(head);

    int len = get_length(head);
    printf("Length of the linked list is: %d\n", len);

    free_list(head);

    return 0;
}