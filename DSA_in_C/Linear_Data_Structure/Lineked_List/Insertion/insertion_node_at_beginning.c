#include<stdio.h>
#include<stdlib.h>


struct node {

    int data;
    struct node * next;

};


struct node* insert_at_beginning(struct node *head) {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Insert the data at beginning: \n");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
    return head;

}




int main() {


    struct node *head, *newnode, *temp;
    head =0;
    int choice = 1;

    while(choice) {
    newnode =(struct node*)malloc(sizeof(struct node));
    printf("Enter data: \n");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    if(head==0){
        head = temp = newnode;
    }

    else {
        temp->next=newnode;
        temp=newnode;
    }


    printf("Do you want to continue: (0,1)\n");
    scanf("%d", &choice);

    }

    // insert_at_beginning();
    head = insert_at_beginning(head);



    temp = head;
    printf("Data part of the nodes are: %d\n", temp->data);
    while(temp !=0) {
        printf("data=%d and address=%u\n", temp->data, temp->next);
        temp = temp->next;
    }

    // Free memory (you should free all nodes, not just one)
    temp = head;
    while(temp != 0) {
        struct node *to_free = temp;
        temp = temp->next;
        free(to_free);
    }

    return 0; 
}




/*
//Using Double pointer


#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

// Function using double pointer to modify head directly
void insert_at_beginning(struct node **head) {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Insert the data at beginning: \n");
    scanf("%d", &newnode->data);
    newnode->next = *head;
    *head = newnode;
}

int main() {
    struct node *head, *newnode, *temp;
    head = 0;
    int choice = 1;

    // Creating the initial linked list
    while(choice) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: \n");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        
        if(head == 0) {
            head = temp = newnode;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue: (0,1)\n");
        scanf("%d", &choice);
    }

    // Using the function with address of head
    insert_at_beginning(&head);

    // Display the linked list
    temp = head;
    while(temp != 0) {
        printf("Data part of the nodes are: %d\n", temp->data);
        temp = temp->next;
    }

    // Free all allocated memory
    temp = head;
    while(temp != 0) {
        struct node *to_free = temp;
        temp = temp->next;
        free(to_free);
    }

    return 0; 
}

*/