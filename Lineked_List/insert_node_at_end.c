#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
};

int pos, i=1, count=0;


struct node *insert_at_given_position(struct node *head)
{

    struct node *newnode, *temp;

    printf("Enter the position: \n");
    scanf("%d", &pos);

    if(pos>count){
        printf("Invalid position\n");
        exit(0);
    }


    else
    {
        // Traverse to the last node
        temp = head;
        while (i<pos)
        {
            temp = temp->next;
            i++;
        }

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: \n");
    scanf("%d", &newnode->data);
        // Link the last node to new node
        newnode->next=temp->next;
        temp->next = newnode;
    }

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
        count++;

        printf("Do you want to continue: (0,1)\n");
        scanf("%d", &choice);
    }

    // insert_at_end();
    head = insert_at_given_position(head);

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
