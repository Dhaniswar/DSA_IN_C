#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
};


struct node *insert_node_after_given_position(struct node *head, int count)
{

    struct node *newnode, *temp;

    int pos, i = 1;

    printf("Enter the position: \n");
    scanf("%d", &pos);

    if(pos>count || pos<1){
        printf("Invalid position\n");
        exit(0);
    }


    else
    {
        // Traverse to the given position node
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
    newnode->next = temp->next;
    temp->next = newnode;
       
    }

    printf("Node inserted successfully after position %d\n", pos);
    return head;
}



int main()
{

    struct node *head, *newnode, *temp;
    head = 0;
    int choice = 1;

    int count = 0;

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

        printf("Do you want to continue: (yes=1,no=0)\n");
        scanf("%d", &choice);
    }

    // insert_at_end();
    head = insert_node_after_given_position(head, count);

    temp = head;
    printf("Compled linked list are displayed below: \n");
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
