#include<stdio.h>
#include<stdlib.h>
#include<string.h>




/*
Implementation of Stack, using Dynamic memory allocation(that is Linked list)
1.) Whenever we are implementing stack using linked list then we always follow or do insrtion/deletion fron the beginnig(head) of the linked list
2.) While implementing stack using linked list we will consider head as top
3.) At the starting head/top value should be NULL
4.) And first node address part should contail NULL value and need to update top value with that inserted node address
5.) If we insert another node then unlike regular linked list that newnode address part contains address of previous node
(but in regular linked list, previous node address part store the address on newnode)

*/

struct stack {
    int data;
    struct stack *next;

};


struct stack *push(struct stack *top){
    struct stack *newnode;
    char choice[30];

    do{

    newnode=(struct stack*)malloc(sizeof(struct stack));

    if(newnode == NULL){
        printf("Memory allocation failed!");
        return top;
    }

    printf("Enter the data to push in the stack: \n");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if(top == NULL){
        top=newnode;
    }

    else{
        newnode->next = top;
        top = newnode;
    }


    printf("Do you want to continue: (yes, Yes, no, No):\n");
    scanf("%s", choice);


    }while(strcmp(choice, "yes")==0 || strcmp(choice, "Yes")==0);

    return top;

    

}


void display(struct stack *top){

    struct stack *temp=NULL;

    temp=top;

    if(top==NULL){
        printf("Stack is empty!\n");
        return;
    }

    else{
        while(temp  != NULL){
            printf("data=%d, next=%p \n", temp->data, temp->next);
            temp = temp->next;
        }
    }
    

}

void peek(struct stack *top){

    if(top==NULL){
        printf("Under Flow condition Occurs!\n");
        return;
    }

    else{
        printf("Top most element of the stack is: data=%d and next=%p\n", top->data, top->next);
    }
}


struct stack *pop(struct stack *top){

    struct stack *temp;
    temp=top;

    if(top==NULL){
        printf("Under Flow condition Occurs!\n");
        return top;
    }

    else{

        top = top->next;

        printf("Sucessfully Pop the data from stack which is: data=%d and next=%p\n", temp->data, temp->next);
        free(temp);

        return top;
    }
}




int main() {

    struct stack *top=NULL;

    top=push(top);

    printf("Displaying stack data: \n");
    display(top);

    peek(top);

    top=pop(top);
    peek(top);

    printf("Displaying stack data after perferming pop operation: \n");
    display(top);





    return 0;

}



