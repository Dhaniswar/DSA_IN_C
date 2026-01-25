#include<stdio.h>
#include<stdlib.h>


/*  

Binary Search Tree


#Insertion Rules
1. Left sub-tree of any node will have values less than that node and the right sub-tree of any node will have values greater than that node 


#Draw Binary Tree by inserting the following numbers from left to right

11, 6, 8, 19, 4, 10, 5, 17, 43, 49, 31


                        11
                       /  \ 
                     6     19
                    /  \    / \
                   4    8  17  43
                    \    \      / \
                     5    10   31  49
                           fig. a


#Deletion of node from binary tree

#case 1:
1. if the node has zero child or no child
=> then simple delete that node and free that node

#case 2:
2. if the node has one child
=> then that node will be replace with that one child

#case 3:
3. if the node has two child
i). (Either) first situation is that we have to replace the node being deleted with it's inorder predecessor 
ii). (OR) and second situation is that we have to replace the node being deleted with it's inorder successor 

Note: that means if you want to delete node having 2 children then the result would be 2
( Either you can replace with inorder predecessor) ( Or you can replace with inorder successor)

#Inorder predecessor:
1. Would be the largest element from the left sub-tree of that node(you want to delete)
2. Would be the smallest element from the right sub-tree of that node(you want to delete)


# let's delete the root element from the above picture (a) 

i). using inorder predecessor

                        10
                       /  \ 
                     6     19
                    /  \    / \
                   4    8  17  43
                    \          /  \
                     5         31  49

ii). using inorder successor

                        17
                       /  \ 
                     6     19
                    /  \     \
                   4    8     43
                    \    \     / \
                     5    10  31  49




#Note inorder of any BST give data in shorted(ascending) order
4 5 6 8 10 11 17 19 31 43 49 (this is even easy way to delete)

*/