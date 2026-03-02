#include<stdio.h>
#include<stdlib.h>


/*
#Construct a Binary Search Tree from Preorder only

Preorder: 20, 16, 5, 18, 17, 19, 60, 85, 70 (Root, Left, Right)

Note: in case of Binary Search Tree, inorder is always in ascending order.

Inorder: 5, 16, 17, 18, 19, 20, 60, 70, 85 (Left Root Right) => We evaluated "Inorder by ascending given "preorder"

Now to construct BST, we need to follow these rules

1. We can find Root of BST from Preorder, first element would be root
2. And we need to search that froot from preorder in Post order (and from that root left elements would be left subtree and right elements would be right subtree)
3. And again in that right and left-sub tree we need to find the rood (we use same rules no. 1, first element after previous root)


                                (20)
                               /      \ 
             (5,16,17,18,19) (16)       (60) (60,70,85)
                            /   \          \
                         (5)     (18)        (85) (70, 85)                            
                                /    \       /
                             (17)     (19)   (70)


Note (18) = (17,18,19)

*/