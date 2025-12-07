#include<stdio.h>
#include<stdlib.h>

/*
#What is Data structure?
=> It is basically a way to organize the data in a manner such that we can process the data effiecntly

#Binary Tree
=> It is non-linear data structure, that means it(data) is having multiple level Or It is a form of hirercy
=> Binary Tree use to represent the data items which are having hirerical relationship among them

=> Tree basically grows from top to buttom

#Tree in Data structure
=> It is a collection of nodes which are link together to simulate the hirercy

#Some basic Termonology use in Tree?

               /A\
              / | \ 
            /B  C  D
           / |  |   |
          /E  F \G\ H  
        /  |\    \ \
       I   J K    L  M         
1. Root of the tree=> Top most element(the node whish is having no parent) in the above figure (A) is the root node
2. And All the element(A,B,C,D,E,F,G,H,I,J,K,L,M) of this tree is known as nodes(A,B,C,D,E,F,G,H,I,J,K,L,M) of the tree
3. Parent node => immidiate predecessor of any node is known as parent of that node( for example A is the parent node of B, C and D)
3. Child node => immidiate successor of any node is known as child node(for example B, C, and D are the child nodes of node A)
4. leaf node(External node) => the node which is having no child is known as leaf node (for example=> F, H, I, J, K, L and M)
5. non-leaf node => the node which is having atleast one child is known as non-leaf node (for example => A, B, C, D, E, and G)
6. edge => Link between 2 nodes
6. Path => Sequence of consecutive edges from source node to destination node( for example path from B to J => B to E and E to J)

*/