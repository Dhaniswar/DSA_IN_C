#include<stdio.h>
#include<stdlib.h>


/*
Implementation of Binary tree in C programming language


                (4)
                / \ 
             (3)  (7)
            /       \
          (-1)     (10)
         
          a). logic representation of binary tree


             [200][4][400]
                / 100     \  
               /           \  
            [250][3][0]   [0][7][300]
            /    200         400  \
           /                       \
         [0][-1][0]          [0][10][0] 
            250                  300
*/


struct binary_tree {
    struct binary_tree *left;
    int data;
    struct binary_tree *right;

};



struct binary_tree *create(){
    struct binary_tree  *newnode=NULL;
    int data;

    newnode = (struct binary_tree *) malloc(sizeof(struct binary_tree));

    if(newnode==NULL){
        printf("Memory allocation failed!\n");
        return NULL;
    }

    printf("Enter data to the given node:OR (enter -1 for no node) \n");
    scanf("%d", &data);

    if(data==-1){
        return 0;
    }

    newnode->data=data;

    printf("Enter left child of %d: ", data);
    newnode->left=create();
    printf("Enter right child of %d: ", data);
    newnode->right=create();

    return newnode;

}



int main() {

    struct binary_tree *root_node=NULL;

    root_node = create();



    return 0;

}