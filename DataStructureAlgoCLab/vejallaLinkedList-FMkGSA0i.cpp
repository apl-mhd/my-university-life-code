#include <iostream>
#include <cstdio>

#define P printf("\n");

using namespace std;

struct node{
	
	int id=10;
	bool mark;
	
	struct node *next[26];
	
	node(){
		
		mark=true;
		for(int i=0; i<25; i++)
			next[i]=NULL;
		
		}
	
	
	};
	
struct list{
	
	int data;
	
	struct list *next;
	
	list(){
		
		next=NULL;
		data=9999999;
		}
	
	};
	
	typedef node node;
	typedef list list;
	
	
int main(int argc, char **argv)
{
	
	list *a=new list();
	
	list *x =a;
	
	x->data=10;
	x->next = new list();
	
	x = x->next;
	
	x->data=20;
	
	x->next =  new list();
	
	x= x->next;
	
	
	cout<<a->data;
	P;
	cout<<a->next->next->data;
	
	
	return 0;
}