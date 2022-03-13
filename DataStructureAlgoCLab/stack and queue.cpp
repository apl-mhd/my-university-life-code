#include <iostream>
#include <cstdio>
using namespace std;

struct list{
	int data;
	struct list *next;
	
	};
typedef struct list node;
	node *head;
	
		
void insert(int x){
	


	node *temp,*temp2;
	
	if(head == NULL){
		head = new node();
		head->data = x;
		head->next = NULL;			
		temp = head;
		}
	else{
		
		temp2 = new node();
		temp2->data=x;
		temp2->next = NULL;
		temp->next = temp2;
		temp = temp2;
		
		}
	

	}
	
int len(node *head){
	int count=0;
	while(head !=NULL){
		
		count++;
		head = head->next;
		}
	
	return count;
	}	

void stackQ(char x ){
	node *temp = head, *temp2;
	
	if(head->next == NULL)
			delete head;
			
	else if(x== 'D'){
		head = head->next;
		delete temp;
				
		}
	else{
		
		
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		temp2 = temp->next;
		temp->next = NULL;
		
		delete temp2;
		
		}
	
	
	}

void display(){
	node *temp = head;
	while(temp !=NULL){	
		printf("%d ", temp->data);
		temp = temp->next;
		
		}
	cout<<endl;
	}
	
bool empty(){
	
	if( head == NULL)
		return true;
	
	return false;
	
}

int main(int argc, char **argv)
{
	
	head = NULL;
	
	insert(10);
	insert(20);
	
	insert(30);
	insert(40);
	
	
	stackQ('x');
	display();
	
	stackQ('D');
	display();
	
	
	return 0;
}