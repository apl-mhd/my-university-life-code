

#include <iostream>
#include <cstdio>
using namespace std;

struct list{

	int data;
	struct list *next;
	
};

typedef list node;

node * head, *a;


void Print(){
	
	
	
}

int main(int argc, char **argv)
{
	int remove;
	node *temp, *prev;
	
	head = new node();
	
	head->data=0;
	temp = head;
	
	for(int i=1; i<10; i++){
		
		temp->next = new node();
		temp->next->data =i;
		temp->next->next=NULL;
		temp = temp->next;
}
	
	
		temp = head;

	while(temp !=NULL){
		
		printf("%d\n", temp->data);
		temp = temp->next;
		
	}
	
	
	temp = head;

	cin>>remove;
	while(temp->data != remove){
	
		
		prev = temp;
		
		temp = temp->next;
	
}

	printf("\n----%d------\n", prev->data);
	
	prev->next = temp->next;
	
	delete temp;
	
	temp = head;
cout<<"--"<<endl;

	

	while(temp !=NULL){
		
		printf("%d\n", temp->data);
		temp = temp->next;
		
	}

	return 0;
}