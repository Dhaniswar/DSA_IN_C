#include<stdio.h>
#include<stdlib.h>

/*

# Construct BST from given postorder: 5, 17, 19, 18, 16, 70, 85, 60, 20  (Left, Right, Root)

There is different way to construct BST, but I will first calculate Inorder(IN BST Inorder is always in ascending order)

Inorder: 5, 16, 17, 18, 19, 20, 60, 70, 85 (Left, Root, Right)


Now to construct BST, we need to follow these rules

1. We can find Root of BST from Postorder, first element would be root from end (Right to left)
2. And we need to search that root from preorder in Post order (and from that root left elements would be left subtree and right elements would be right subtree)
3. And again in that right and left-sub tree we need to find the rood (we use same rules no. 1, first element after previous root( from the end))


                                (20)
                               /      \ 
             (5,16,17,18,19) (16)       (60) (60,70,85)
                            /   \          \
                         (5)     (18)        (85) (70, 85)                            
                                /    \       /
                             (17)     (19)   (70)


Note (18) = (17,18,19)






*/