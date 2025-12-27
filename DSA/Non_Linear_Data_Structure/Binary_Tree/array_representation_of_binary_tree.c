#include<stdio.h>
#include<stdlib.h>

/*
#Binary tree can be represented using 2 ways in c programming
1). Using linked list (Dynamic memory allocation)
2). Using Array (static memory allocation=> Sequential Representation)


#Array representation of Binary Tree( Sequential Representation)
Note: to represent binary tree in array, the binary tree must be complete binary tree.
=> In array representation, if left or right skewed binary tree is there the waste of space is there.
=> while plotting node in array, we must start with root and level by level and always left to right.


            A
          /   \ 
         B     C 
        / \   / \ 
       D   E F   G
     /  \ 
    H   I
    a).Logical/pictorial representation of binary tree


#Case-1(array index start with 0)

[A][B][C][D][E][F][G][H][I]
 0  1  2  3  4  5  6  7  8   (array indexes)

b). this is the array/sequential representation of binary tree.

# There are formulae for calculating child and parent

if a node is at ith index,
 
* left child would be at => [(2*i)+1]
* right child would be at => [(2*i)+2]
* parent of ith node would be at => ⌈(i-1)/2⌉





#Case-2(array index start with 1)

[A][B][C][D][E][F][G][H][I]
 1  2  3  4  5  6  7  8  9  (array indexes)

b). this is the array/sequential representation of binary tree.

# There are formulae for calculating child and parent

if a node is at ith index,
 
* left child would be at => (2*i)
* right child would be at => [(2*i)+1]
* parent of ith node would be at => ⌈i/2⌉





#Note: to represent binary tree in array, the binary tree must be complete binary tree.
=> In array representation, if left or right skewed binary tree is there the waste of space is there.
=> while plotting node in array, we must start with root and level by level and always left to right.




            A
          /   \ 
         B     C 
        / \   / \ 
       D   E F   G
          / \ 
         H   I
    a).this is not a complete binary tree


            A
          /   \ 
         B     C 
        /  \   / \ 
       D    E F   G
      / \  / \ 
     () ()H   I
    a).this is now a complete binary tree

=> so like this at first we must modify non complete binary tree to complete binary tree
=> and we will follow the same rule while representing in array
=> for the empty node we will allocate imply space

[A][B][C][D][E][F][G][][][H][I]
 1  2  3  4  5  6  7 8 9 10  11  (array indexes)

*/