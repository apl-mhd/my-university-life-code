#include <iostream>
#include <cstdio>
#include <queue>
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
	
tree *minimum(tree *root){
	
		if(root->left!=NULL)
			return	minimum(root->left);
		//cout<<'a';	
		return root;
}


tree *Delete(tree *root, int data){
	
	if(root == NULL)
		return root;
	else if(data < root->data)  root->left = Delete(root->left, data);
	else if(data > root->data)  root->right = Delete(root->right, data);
	
	else{
		 if(root->right == NULL && root->left == NULL){
			 
			 delete  root;
			 root = NULL;
			
			 
			 }
			else if(root->left == NULL){
				
				tree *temp = root;
				root = root->right;
				delete temp;
				
				
				}
			else if(root->right == NULL){
				
				tree *temp =root;
				root = root->left;
				delete temp;				
				
				}
			else{
				tree *temp = minimum(root->right);
				root->data = temp->data;
				root->right = Delete(root->right,temp->data);
				
				}
		
		}
			return root;

}

tree *Find(tree *root,int data){
	
	if(root == NULL)
		return root;
	else if(root->data == data)
		return root;
		
	else if(data<root->data)
		return Find(root->left,data);
	else
		return Find(root->right, data);
	
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
	
tree *getSuccesor(tree *root, int data){
	
		tree *current, *succesor, *ancestor;
		
			current = Find(root, data);
		if(current ==NULL)
			return current;
		if(current->right !=NULL)
			return minimum(current->right);
		else{
				ancestor = root;
			while(current !=ancestor){
				
				if(current->data < ancestor->data){
					succesor = ancestor;
					
					ancestor = ancestor->left;
				
				}
				else
				ancestor = ancestor->right;
			}
			
			return succesor;
			
			
		
	}	
	
}
/**tree traversal technique**/

void inorder(tree *root){
	
	
	if(root==NULL) return;
	
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	
	
	}
void postOrder(tree *root){
	
	
	if(root->left !=NULL)
		inorder(root->left);
	if(root->right !=NULL)
		inorder(root->right);
		cout<<root->data<<" ";
	
	
	
	}
void preOrder(tree *root){
	
	cout<<root->data<<" ";
	if(root->left !=NULL)
		inorder(root->left);
	if(root->right !=NULL)
		inorder(root->right);
	
	
	
	}
	
void levelOrder(tree *root){
	
	queue<tree*>q;
	
	q.push(root);
	while(!q.empty()){
		
		tree *current = q.front();
		
		cout<<current->data<<" ";
		
		if(current->left !=NULL)
			q.push(current->left);
			
		if(current->right !=NULL)
			q.push(current->right);
		
		q.pop();
		
		}
	
	
	}
	
	
	
void depest(tree *root){
	
	queue<tree*>q, dp;
	
	q.push(root);
	dp.push(root);
	while(!q.empty()){
		
		tree *current = q.front();
		
		//cout<<current->data<<" ";
		
		if((current->left !=NULL) || (current->right !=NULL)){
			
			while(!dp.empty())
				dp.pop();
					
			}
		
		if(current->left !=NULL){
			q.push(current->left);
			dp.push(current->left);
		}
			
		if(current->right !=NULL){
			q.push(current->right);
			dp.push(current->right);
		}
		q.pop();
		
		}
		
	while(!dp.empty()){
			tree *temp = dp.front();
			cout<<temp->data;
			dp.pop();
					
			}
	
	}
	
	
void height(tree *root){
	
	
	
	}	
	
	
int main(int argc, char **argv)
{
	tree *root=NULL;
	
	root = insert(root,30);
	root = insert(root,20);
	root = insert(root,10);
	
	depest(root);

	//cout<<root->left->left->left;
	/*
	root = insert(root,5); root = insert(root,10);
	root = insert(root,3); root = insert(root,4); 
	root = insert(root,1); root = insert(root,11);
	*/
	
	
	//root = Delete(root,5);
	
	
	
	//inorder(root);
	/*
	cout<<endl;
	postOrder(root);
	cout<<endl;
	preOrder(root);
	cout<<endl;
	levelOrder(root);
	*/
	//f = getSuccesor(root, 10);
	//cout<<f->data;
	
	//cout<<minimum(root);
	//cout<<search(root,10)<<endl;
//	cout<<search(root,100)<<endl;
	//cout<<search(root,40)<<endl;
	//cout<<root->data<<endl;
	//cout<<root->left->left->data<<endl;
	//cout<<root->right->right->data<<endl;
	
	return 0;
}