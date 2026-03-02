#include<stdio.h>

/*
=> It is a liner data Structure
=> It is a collection of data elements which are sore in non consecutive locations
=> Some extra space would be required the store the pointer with each value
=> Linked list is collection of more than one data item.
=> Unlike in array, data items are zstored in consecutive location.
=> Drawback of linked list is the, we have to store pointer with datatype.
=> in Linked list random access is not possible, only sequential access is possible. And searching/deletion/insertion time complexity need O(n)
=> struct node *next; // means we have to store the address of next node so datatype of next node is struct node so we create pointer variavle of next node datatypes

=> In linked list there is always Head/Starting node who is going to keep address of first node
=> We can extends the size of linked list
=> in the last node in the pointer part it will store the null value.

=> Binary search is not possible in linked list
=> It is of Dynamic size

*/


struct node{
    int a;
    struct node *next;
};


int main() {

    return 0;
}