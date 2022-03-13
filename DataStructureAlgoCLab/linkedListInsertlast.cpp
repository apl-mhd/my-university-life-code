

#include <iostream>
#include <cstdio>
using namespace std;

struct list{

	int data;
	struct list *next;
	
};

typedef list node;

node * head, *a;


int main(int argc, char **argv)
{
	node * temp;
	
	head = new node();
	
	head->data=10;
	temp = head;
	
	for(int i=0; i<100000; i++){
		
		temp->next = new node();
		temp->next->data =i;
		temp->next->next=NULL;
		temp = temp->next;
}
	
	temp = head;
	printf("->%d\n", temp->data);
	
	while(temp !=NULL){
	
		printf("%d\n", temp->data);
		temp = temp->next;

}


	return 0;
}