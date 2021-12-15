#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct tree{
    char data;
    struct tree *left;
    struct tree  *right;

};

typedef struct tree tree;



void inorder(tree *root){
    if(root->left != NULL)
            inorder(root->left);

    printf("%c ", root->data);
    if(root->right !=NULL)
        inorder(root->right);



}

tree *createTree(tree *root){

    char node;
    printf("%c has any left child?\n", root->data);

    cin>>node;
    if(node == 'y'){

        root->left = new node();
        printf("Enter left dat %c", root->data);
        cin>>root->left->data;
        createTree(root->left);
    }
    else{

        root->left = NULL;
    }


    printf("%c has any right child?\n", root->data);

    cin>>node;
    if(node == 'y'){

         root->right = new node();
        printf("Enter left dat %c", root->data);
        cin>>root->right->data;
        createTree(root->right);
    }
    else{

        root->right = NULL;
    }



return root;
}



int main()
{
    tree  *root;
   root = new node();
   root->data = 'a';
   createTree(root);
   inorder(root);


    return 0;
}