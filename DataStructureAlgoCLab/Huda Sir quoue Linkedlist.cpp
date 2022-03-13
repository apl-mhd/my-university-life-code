#include <iostream>
#include <cstdio>
using namespace std;

struct quoueFrame{
	
	int data;
	struct quoueFrame *next;
	
	};
	
typedef struct quoueFrame node;

	node *top,*f,*r;
	
		
void Push(int x){
	
	node *temp;	
	temp=new node();
	temp->data=x;
	r->next= temp;
	r= temp;
	r->next = NULL;	
}

void Print(){
	
	node *temp;
	temp =f->next;
	
	while(temp !=NULL){
		
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	
	cout<<endl;

	
}

void Pop(){
	node *temp;
	if(f==r)
		cout<<"underflow"<<endl;
	else{
		
	temp = f->next;
	f->next= temp->next;
	delete temp;
	if(f->next == NULL)
		r = f;
}
}

 void Top(){
	

	
}


int main(int argc, char **argv)
{
	top = new node();
	r = top;
	f  = top ;
	
	
	Push(10);
	Push(20);
	Push(30);
	Pop();
	Pop();
	Pop();
	Pop();
	

	
	
	
	
	return 0;
}