#include <iostream>
#include <cstdio>
using namespace std;

struct StackFarame{
	
	int data;
	struct StackFarame *next;
	
	};
	
typedef struct StackFarame node;

	node *top;
	
	
	
	
void Push(int x){
	
	node * temp;
	
	temp = new node();
	
	temp->data =x;
	temp->next = top;
	top= temp;
	
	
}

void Print(){
		
	node *temp;
	temp = top;
	while(temp !=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	 
	}
	cout<<endl;
}

void Pop(){
	
	node *temp;
	if(top == NULL)
		cout<<"underflow"<<endl;
	else{
		
		temp = top;
		top= temp->next;
		delete temp;
		
	}

	

}

 void Top(){
	
	if(top !=NULL)
	cout<<top->data<<endl;
	
}


int main(int argc, char **argv)
{
	top = NULL;
	
	Push(10);
	Push(20);
	Push(30);
	Top();
	
	
	
	return 0;
}