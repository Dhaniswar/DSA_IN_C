#include<stdio.h>
#include<stdlib.h>




/*

Construct a Binary Tree from Preorder ANd Postorder

Preorder(Root Left Right):-  F B A D C E G I H

Postorder(Left Right Root):- A C E D B H I G F

Notes:
1). If only preorder and postorder is given then it is not possible to construct a unique binary tree
2). But it is possible to construct a unique full binary tree


Rules
i). first we need to find out root of the tree from Preorder
ii). And very first element of the Preorder or last element of postorder would be root of the tree (i.e, F)
iii). And find out left and right child of tree
iV). We have to checkout the successor of root in Preorder(i.e, B) and Findout the position of that successor(i.e, B) in Postorder
V).  Now all the elements from starting to that position of that successor(A C E D B) would be left subtree and remaining elements(H I G) would be right subtree 
Vi). FInd out Predecessor In Postorder(i.e, G) and Find out the location of that Predecessor(i.e, G) in Preorder and from that G to last elements(H I G)) would be the element of right subtree and remaining(A C E D B)  would be element of left subtree.
Vii). 

Now Preorder of sub-tree:  B A D C E
Now Postorder of sub-tree: A C E D B


again Preorder:  D C E
again Postorder: C E D

now right side
Preorder:  G I H
Postorder: H I G

now right side
Preorder:  I H
Postorder: H I

                             (F)
                           /     \ 
                         (B)      (G) 
                        /   \      /  
                      (A)   (D)   (I)
                           /  \    /
                         (C)  (E) (H)
           
                            fig. (a)


                             (F)
                           /     \ 
                         (B)      (G) 
                        /   \        \
                      (A)   (D)      (I)
                           /  \      /
                         (C)  (E) (H)
           
                            fig. (b)

#It is the proof that fig (a) and (b) has same Preorder and Postorder(i.e, we can not form a unique binary tree from Postorder and Preorder)

#Trick to Construct a Binary Tree from Preorder and Postorder Traversal

1. The root node is always the first element in the preorder list.

2. Look at the next element in preorder — call this value B.

3. Find the position of B in the postorder list.

4. If B appears on the left side of the root in postorder, then B belongs to the left subtree; otherwise, it belongs to the right subtree.

5. Repeat this process recursively to build the entire tree.

Let's construct the binary tree using this trick
                              
                            (F)
                           /    \ 
                         (B)     (G)
                        /  \      / 
                      (A)  (D)   (I) 
                          /  \    /
                        (C)  (E) (H)

#Construct a Full Binary Tree(each element has either 0 or 2 child) from Preorder ANd Postorder

Preorder(Root Left Right):-  F B A D C E G I H K J

Postorder(Left Right Root):- A C E D B H K I J G F


                                (F)
                               /    \ 
                             (B)       (G)
                            /  \        /  \
                          (A)  (D)     (I)  (J)
                              /   \    /  \ 
                             (C)  (E) (H)  (K)

*/




int main(){

    int i, j;

    for(i=0; i<5; i++){

        for(j=0; j<5; j++){

            if((i+j)<4){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
        
    }

    for(i=4; i>0; i--){

    for(j=1; j<=i; j++){

        printf("*");

        }
        printf("\n");
        
    }

    return 0;
}



