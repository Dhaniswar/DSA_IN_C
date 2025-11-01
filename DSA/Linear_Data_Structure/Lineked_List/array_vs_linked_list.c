#include<stdio.h>

/*
1). Array vs Linked List

// Const of accessing an element of Array                       || // Const of accessing an element of Linked list  
1). Time complexity is O(1) => constant time                    || 1). Time complexity is O(n) 
2). If we want to perform  accessing data very                  || 2). Linked list is Dynamic type, we can create new node at run time so memory utilization is very effective
frequently then Array is good                                   || 3). If the size of data is large or complex then, it is better to use linked list data structure
3). In array memory utilized is ineffective                     || 4). Cost of inserction/delection in linked list 
4). It is static                                                ||    i.  at beginning O(1) =(Best case) 
5). Memory required in case of array is less than linked list   ||    ii. at end O(n)  =(worst Case) 
6). Cost of inserction/delection in array                       ||   iii. at  midle O(n) => n/2(theta-p) = (Average case) 
 i.  at beginning O(n) =(Worst case)                            || 5). In Linked list only Linear search is possible
 ii. at end O(1) => constant  =(Best Case)                      ||
iii. at  midle O(n) => n/2(theta-p) = (Average case)            ||
7). It is easy to use                                           ||
8). In array both Linear and binary search are possible         ||
                                                                ||
                                                                ||
                                                                ||
                                                                ||
                                                                ||
                                                                ||
                                                                ||
                                                                ||
                                                                ||
                                                                ||
                                                                ||
                                                                ||



*/

struct node{
    int a;
    struct node *prev;
    struct node *next;

};


int main() {

    return 0;
}