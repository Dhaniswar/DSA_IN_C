#include<stdio.h>

/*
1). Doubly Circular Linked list

=> It has the property of both singular  Circular Linked list as well as doubly  Circular Linked list
=> It is the variation of singly linked list
=> In Doubly linked list each node contains three parts one is  data part next other 2 part is addredd part(pointer to it's previous node and pointer to it's next node)
=> only difference in circular linked list is that it will store address of first node in the address part of last node
=> And the address of the first node is store in the pointer/head pointer/ start pointer
=> In circular linked list, it will store address of first node in the address part of last node and adderss of last node in the address part of first node

*/

struct node{
    int a;
    struct node *prev;
    struct node *next;
};


int main() {

    return 0;
}