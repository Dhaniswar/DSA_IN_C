#include<stdio.h>
#include<stdlib.h>

/*
Binary tree and its types

=> It is a tree in which each node can have at most 2 children


these are the example of binary tree. (where A, B, C, D representing nodes of tree)
        A
       / \
       B  C
       
       A

       A
      /
      B
     /
     C
    /
    D

#But this is not a binary tree because it has more than 2 children

        A
      / | \
    B   C  D

# Note
At, level 0 we have 1 node = 2^0
At, level 1 we have 2 nodes = 2^1
At, level 2 we have 4 nodes = 2^2
At, level 3 we have 8 nodes = 2^3
At, level 4 we have 16 nodes = 2^4
.
.
.
At, leven n we have n nodes = 2^n

=> At each level i, the maximum number of node possible in a binary tree is 2^i.
=> Max no of nodes possible at any level i is 2^i.


#Maximum no. of nodes of height h = 2^0 + 2^1 + 2^2 + 2^3 = 15 (suppose I have 3 level only, so height is 3)
 2^0+2^1+2^2+2^3+....+2^h

#Maximum no. of nodes of height h = (2^h+1 -1)

#Minimum no. of nodes of height h = h +1

Q). If there is n maximum node in the binary tree, find out the possible height?

n = 2^h+1 -1
n+1 = 2^h+1
log(n+1) = log(2^h+1)
log(n+1) = h+1
h = ⌈log(n+1) -1⌉ (it can be minimum  height)

Q). If there is n minimum node in the binary tree, find out the possible height?

n = h+1
h=n-1(it can be maximum height)


#Types of Binary Tree
1). Full/Proper/strict binary tree
2). Complete binary tree
3). Perfect Binary tree
4). Degenerate Binary Tree
5). Balanced Tree


# Full/Proper/strict binary tree?
=> It is a binary tree where each node is containing eather 0 or 2 children 

=> OR each node will contain 2 children except leaf node 

eg, 

      A
     / \
    B   C

     A
    / \
   B   C
  / \
 D   E

      A
     / \
    B   C
   / \
  D   E
     / \
    F   G


    But this is not Full binary tree

     A
    / \
   B   C
  / \   \
 D   E   F (because it is containing 1 child)

 #Node 

 1). no of leaf node = no .of internal nodes + 1 (this is the property of full binary tree)

*/