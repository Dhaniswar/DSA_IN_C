#include<stdio.h>
#include<stdlib.h>


/*
#Postorder Traversal of Binary tree

Inorder => Left Right Root





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

void postorder_traversal(struct binary_tree *root){

    if(root==NULL){
        return;
    }
    
    else{
        postorder_traversal(root->left);
        postorder_traversal(root->right);
        printf("Node: %d\n", root->data);

    }

}




int main(){

    struct binary_tree *root=NULL;

    root = create();

    printf("Postorder Traversal is: \n");

    postorder_traversal(root);



    return 0;
}