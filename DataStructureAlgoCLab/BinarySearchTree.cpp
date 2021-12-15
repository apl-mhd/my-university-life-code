#include <iostream>
#include <cstdio>
using namespace std;

struct tree{
	int data;
	struct tree *left;
	struct tree *right;
};

typedef struct tree tree;

tree *getNode(tree *root, int x){
		
		root=new tree();
		root->data =x;
		root->left = NULL;
		root->right = NULL;
return root;
}
tree *insert(tree *root,int data){
	
	if(root == NULL){
		
		root = new tree();
		root = getNode(root, data);
		
		}
	
	else if(data<=root->data){
		
			root->left = insert(root->left,data);
		
		}
		else{
			root->right = insert(root->right,data);
			}	
		
return root;	
	}
	
int minimum(tree *root){
	
		if(root->left!=NULL)
		return	minimum(root->left);
		
		else
		
		return root->data;
}


bool search(tree *root, int item){
		
		if(root == NULL)
			return false;
		else if(root->data == item)
			return true;
		else if(item <= root->data)
			return search(root->left,item);
		else
			return search(root->right,item);
			
	}
	
int main(int argc, char **argv)
{
	tree *root=NULL;
	
	root = insert(root, 10);
	root = insert(root, 5);
	root = insert(root, 20);
	root = insert(root, 40);
	root = insert(root,-1);
	
	
	
	//cout<<minimum(root);
	//cout<<search(root,10)<<endl;
//	cout<<search(root,100)<<endl;
	cout<<search(root,40)<<endl;
	//cout<<root->data<<endl;
	//cout<<root->left->left->data<<endl;
	//cout<<root->right->right->data<<endl;
	
	return 0;
}