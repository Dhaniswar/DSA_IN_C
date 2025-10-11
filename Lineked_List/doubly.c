#include<stdio.h>

/*
1). Doubly Linked list

=> As the name suggest each node is going to have two pointer

=> each node is having 3 parts one is data part and 2 address part(pointer to it's previous node and pointer to it's next node)

=> In Doubly linked list each node contains three parts one is  data part next other 2 part is addredd part(pointer to it's previous node and pointer to it's next node)

=> And the address of the first node is store in the pointer/head pointer/ start pointer

=> And Address part of pirst and last node contain Null value

=> forward and backward traversal are possible in this list

=> forward and backward sequential movement is possible

*/

struct node{
    int a;
    struct node *prev;
    struct node *next;

};


int main() {

    return 0;
}