#include <iostream>
#include <cstdio>
int count = 0;
using namespace std;
struct node{
		
	int data;
	struct node *next;
	
};

struct node *head;

void Insert(int x){
	struct node *temp =new node();
	
	temp->data = x;
	temp->next = head;
	head = temp;
	
}

void Print(){
		struct node *temp =new node();
	temp = head;
	
	while(temp !=NULL){
		
		printf(" %d ",temp->data);
		temp=temp->next;
	}
	
	printf("\n");
	
}

void search(int x, int replace){
	struct node *temp =new node();
	//struct node *add =new node();
	
	//temp = head;
	
	if(head->data == x){
		temp->data=replace;
		temp->next=head;
		head = temp;
		//add->next =

		return;
		}
	if(head->next->next->data == 20){
		temp = head->next->next;
		temp->data = replace;
		
		printf("found\n");
	
	}
}

int main(int argc, char **argv)
{
	head = NULL;
	
		Insert(10);
		Insert(20);
		Insert(30);
		Insert(40);
		search(30,100);
		//search(100,1);
		Print();
	
return 0;
}