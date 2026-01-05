#include<stdio.h>
#include<stdlib.h>




/*

Construct a Binary tree from Postorder and Inorder

Postorder: 9,1,2,12,7,5,3,11,4,8
Inorder: 9,5,1,7,2,12,8,4,3,11


Rules
i). first we need to find out root of the tree from Postorder
ii). We will start scan from right to left(from end to start) And very first element of the Postorder would be root of the tree
iii). And find out left and right child of tree (you can find this from Inorder)
iV). Find the root from preorder in Inorder then left side of the element would be left sub tree and right side of the elements would be right sub tree

                                    (8)
                                   /    \ 
                                  (5)   (4) 
                                 /   \     \ 
                               (9)   (7)    (11)
                                     /  \    /
                                  (1)   (12)(3)
                                        / 
                                       (2)


*/