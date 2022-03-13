#include <iostream>
using namespace std;

struct stack{
	
	int data;
	struct stack *next;
	
	};
typedef struct stack stack;
	stack *head;
void push(int x){
	
	stack *temp2;
	
	if(head == NULL){
		head = new stack();
		head->data = x;
		head->next = NULL;			
		
		}
	else{
		
		temp2 = new stack();
		temp2->data=x;
		temp2->next = head;
		head = temp2;
		
		}
	

	}
	
int top(){
	
	if(head == NULL){
		cout<<"empty";
	return -1;
}
	return head->data;
	
	}
	
void pop(){
	
	stack *temp = head;
	if(head == NULL){
		cout<<"emtpy\n";
		return;
	}
	if(head->next == NULL){
		head = NULL;
		delete head;
	}
	else{
		
		 head = head->next;
		 delete temp;
		 
		}
	
	
	}
	
	
	
void display(){
	stack *temp = head;
	while(temp !=NULL){	
		printf("%d ", temp->data);
		temp = temp->next;
		
		}
	cout<<endl;
	}

int main(int argc, char **argv)
{
	head = NULL;
	push(10);
	push(20);	
	push(30);
	push(40);
	display();
	pop();
	display();
	return 0;
}