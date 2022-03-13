#include <iostream>
#include <cstdio>
using namespace std;

struct node{	
	int data;		
	struct node *link;	
};


struct node *head, *start, *root;
 
	
void insert(int x){
	
	struct node *temp = new node();
	//struct node *newNode = new node();
	
	if(head == NULL){
				
		temp->data = x;
		temp->link = NULL;
		head = temp;
		
		}
		
	else{
		 temp->data = x;
		 temp->link = NULL;
		root = head;
		while(root->link != NULL){
		
			root = root->link;
		}
		root->link = temp;
		//head->link = temp;
	
}
		
	}
	
void print(){
	
	struct node *temp = head;
	
	printf("data:\n");
	
	while(temp != NULL){
	
		printf("%d",temp->data);
		
		temp = temp->link;
		
	}
	printf("\n");
	
	
	}

int main(int argc, char **argv)
{
     start = new node();
	head = NULL;
	//start = NULL;
	
	int i,n;
	
	for(i=0; i<10 ;i++){
		
		cin>>n;
		insert(n);
		print();
			
		}
	return 0;
}