#include <iostream>
#include <cstdio>
using namespace std;
/*insert data in first position*/
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
	
void position(){
	struct node *temp = new node();
	//struct node *position = new node();
	
	temp->data = head->data;
	head->data=0;
	temp->link = head->link;
	head->link = temp;
	//printf(" %d \n", head->link->data);
	
	

		
	
}
	
void print(){
	
	struct node *temp = head;
	
	printf("data:\n");
	
	while(temp != NULL){
	
		printf("%d. ",temp->data);
		
		temp = temp->link;
		
	}
	printf("\n");
	
	
	}

int main(int argc, char **argv)
{
     start = new node();
	head = NULL;
	//start = NULL;
	
	//int i,n;
	
	//for(i=0; i<10 ;i++){
		
		//cin>>n;
		insert(1);
		insert(2);
		insert(3);
		insert(4);
		insert(5);
		position();
		print();
			
		//}
	return 0;
}