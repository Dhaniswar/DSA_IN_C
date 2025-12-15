#include<stdio.h>
#include<stdlib.h>

/*
#What is Data structure?
=> It is basically a way to organize the data in a manner such that we can process the data efficiently

#Binary Tree
=> In binary tree a tree can have at most 2 children
=> It is non-linear data structure, that means it(data) is having multiple level Or It is a form of hierarchy
=> Binary Tree use to represent the data items which are having hierarchal relationship among them

=> Tree basically grows from top to bottom

#Tree in Data structure
=> It is a collection of nodes which are link together to simulate the hierarchy

#Some basic Terminology use in Tree?

               /A\
              / | \ 
            /B  C  D
           / |  |   |
          /E  F \G\ H  
        /  |\    \ \
       I   J K    L  M         
1. Root of the tree=> Top most element(the node whish is having no parent) in the above figure (A) is the root node
2. And All the element(A,B,C,D,E,F,G,H,I,J,K,L,M) of this tree is known as nodes(A,B,C,D,E,F,G,H,I,J,K,L,M) of the tree
3. Parent node => immediate predecessor of any node is known as parent of that node( for example A is the parent node of B, C and D)
3. Child node => immediate successor of any node is known as child node(for example B, C, and D are the child nodes of node A)
4. leaf node(External node) => the node which is having no child is known as leaf node (for example=> F, H, I, J, K, L and M)
5. non-leaf node => the node which is having atleast one child is known as non-leaf node (for example => A, B, C, D, E, and G)
6. edge => Link between 2 nodes
7. Path => Sequence of consecutive edges from source node to destination node( for example path from B to J => B to E and E to J)
8. Ancestor => Any predecessor node on the path from root to that node (for example => Ancestor of L are A, C and G)
9. Descendant => Any successor node on the path from that node to leaf node (for example => Descendant of C are G, L, and M)
10. Sub-Tree => Sub tree of any Tree containing a node of that tree and all it's descendant for(example sub tree of A are B, C and D)
11. Sibling => All the children of same parent (fro example=> A, B, and C are sibling)
12. Degree of node => The no. of children of that node (For example=> degree of node (A) are (B), (C), and (D) i.e 3)  => Degree of all the leaf nodes are Zero(0)
13. Degree of Tree => The maximum degree among all nodes (for example => Degree of the above tree is 3 )
14. Depth of node => length of the path from root to that node(Or no. of edges from root to that node) (for example => depth of J is 3(A-B, B-E, and E-J)) => depth of root node is zero always
15. Height of node => no. of edges in the longest path from that node to a leaf (for example hight of B is 2, and height of G is 1)
16. Height of the Tree is always equal to hight of the root node ( for example => height of the tree or root in the above tree is 3)
17. Level of node => the distance from root to the given node(or no. of edges from root to the given node in that path) (For example level of G is 2 and level of L is 3)
18. Level of node = Height of the tree 
19. Level of the tree  = Height of the tree 
20. If there is n node then there must be n-1 edges
=> n nodes = (n-1) edges

#Memory representation of Binary tree in C (We use dynamic memory allocation with structure and node)

        [][A][]
        /    \
    [][B][] [][C][]
       /\       \ 
[][D][] [][E][] [][F][]

struct binary_tree{
    struct binary_tree *left;
    char data;
    struct binary_tree *right;

};


#Note: 
- All the node in the Binary tree are unidirectional
- Each hierarchy/step is known as level (for example A is  level, (B, C, and D) is 1(1st) level, (E, F, G, and H) is 2(2nd) level and (I, J, K, L, and M) is 3(3rd) level)



#Application of Tree 
- Trees are basically use to implement file system
- In routing protocol also use tree data structure
- It organize the data for a quick search(or insertion or deletion) like binary search or heap search
*/