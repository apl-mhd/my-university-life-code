/*mmahmud161036@bscse.uiu.ac.bd */

#include <iostream>
#include <cstdio>
 
using namespace std;

struct tree{
    char data;
    struct tree *left;
    struct tree  *right;
 
};
 int index=-1;
typedef struct tree tree;
 tree *stack[100];
tree *insert(tree *root){
	 
	 char ch;
	 
	 printf("%c has any Left child: ", root->data);
		cin>>ch;
		if(ch == 'y'){
			root->left = new tree();
			cout<<"Enter left child\n";
			cin>>root->left->data;
			insert(root->left);
			}
		else
			root->left =NULL;
			
		printf("%c has any Right child:", root->data);
		cin>>ch;
		
		if(ch == 'y'){
			root->right = new tree();
			cout<<"Enter right child\n";
			cin>>root->right->data;
			insert(root->right);
			}
		else
			root->right = NULL;
return root;	 
}

 
 
void push(tree *x){
	
	index++;
	
	stack[index]  = x;
	
}
void pop(){
	
	index -=1;
}

tree *top(){
	
	
	return stack[index];
}

bool empty(){
	
	if(index <0)
		return true;
		
	return false;

}

void inorder(tree *root){
	tree *x;
	while(true){
		
		if(root !=NULL){
			
			push(root);
			root=root->left;
			
			}
		else{
			if(empty())
				break;
			x = top();
			cout<<x->data;
			pop();
			root = x->right;	
			
			}
			
		
	}
	
}

 
int main(int argc, char **argv)
{

	
	tree *root;
	root = new tree();
	root->data = 'A';	
	insert(root);
	inorder(root);
	
	
	
	
	return 0;
}