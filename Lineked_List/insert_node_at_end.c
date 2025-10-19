#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
};



void insert_at_endv1(struct node *head)
{

    struct node *newnode, *temp;

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Insert at the end: \n");
    scanf("%d", &newnode->data);
    newnode->next = 0;

    temp=head;

    while(temp->next !=0){
        temp= temp->next;
    }

    temp->next = newnode;


    temp=head;

    printf("Complete linked list is displayed below: \n");

    while(temp !=0){
        printf("data=%d and next=%p\n", temp->data, temp->next);
        temp = temp->next;
    }

}




int main()
{

    struct node *head, *newnode, *temp;
    head = 0;
    int choice = 1;

    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: \n");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }

        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue: (0,1)\n");
        scanf("%d", &choice);
    }

    // insert_at_end();
    insert_at_endv1(head);


    // Free memory (you should free all nodes, not just one)
    temp = head;
    while (temp != 0)
    {
        struct node *to_free = temp;
        temp = temp->next;
        free(to_free);
    }

    return 0;
}








/*

//Inserting node at end in the given linked list using pointer return types of fun

struct node *insert_at_end(struct node *head)
{

   struct node *newnode, *temp;

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Insert at the end: \n");
    scanf("%d", &newnode->data);
    newnode->next = 0;

    temp=head;

    while(temp->next !=0){
        temp= temp->next;
    }

    temp->next = newnode; 

    return head;
}






int main()
{

    struct node *head, *newnode, *temp;
    head = 0;
    int choice = 1;

    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: \n");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }

        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue: (0,1)\n");
        scanf("%d", &choice);
    }

    // insert_at_end();
    head = insert_at_end(head);

    temp = head;
    printf("linked list after insertion: %d\n", temp->data);
    while (temp != 0)
    {
        printf("data=%d and address=%p\n", temp->data, (void*)temp->next);
        temp = temp->next;
    }

    // Free memory (you should free all nodes, not just one)
    temp = head;
    while (temp != 0)
    {
        struct node *to_free = temp;
        temp = temp->next;
        free(to_free);
    }

    return 0;
}



*/