#include<stdio.h>
#include<stdlib.h>


/*
#Inorder Traversal of BInary tree

Inorder => Left Root Right





*/

struct binary_tree{
    struct binary_tree *left;
    int data;
    struct binary_tree *right;
};



struct binary_tree *create(){

    int data;
    struct binary_tree *newnode=NULL;

    newnode = (struct binary_tree*)malloc(sizeof(struct binary_tree));

    if(!newnode){
        printf("Memory allocation failed!\n");
        return NULL;
    }

    printf("Enter node or (Enter -1 for no node: )\n");
    scanf("%d", &data);

    if(data==-1){
        return 0;
    }

    newnode->data=data;
    printf("Enter the left child of %d: \n", data);
    newnode->left = create();
    printf("Enter the right child of %d: \n", data);
    newnode->right = create();

    return newnode;

}

void inorder_traversal(struct binary_tree *root){

    if(root==NULL){
        return;
    }
    
    else{
        inorder_traversal(root->left);
        printf("Node: %d\n", root->data);
        inorder_traversal(root->right);
    }

}




int main(){

    struct binary_tree *root=NULL;

    root = create();

    printf("Inorder Traversal is: \n");

    inorder_traversal(root);



    return 0;
}