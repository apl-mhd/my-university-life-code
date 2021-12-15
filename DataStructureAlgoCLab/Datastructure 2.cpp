#include <cstring>
#include <iostream>
#include <cstdio>
using namespace std;

struct list{
	
		int data;
		struct list *next;
		struct list *prev;
	
};

typedef struct list node;

node *Insert(node *head, int y,int x){
	
		node *temp;
		if(head == NULL){
			
			head = new node();
		
			head->prev = NULL;
			
			temp = new node();
			head->next = NULL;
			temp->data = x;
			temp->next = NULL;
			
			temp->prev = head;
			
			
			
		}
	
	}


int main(int argc, char **argv)
{
			
	
	int flag=1;
	int y, x,del;
	char function[20];
	
	node *head;
	
	head = new node();
	
	head->prev = NULL;
	head->next = NULL;
	
	
	while(flag){
		
		scanf("%s",function);
		
		if(strcmp(function, "ins")==0){
				
			
				scanf("%d%d", &y,&x);
				printf("%d %d", y, x);
				
				
			}
			
		if(strcmp(function, "shw")==0){
			
				cin>>del;
				
			}
			
		if(strcmp(function, "del")==0){
			
			printf("del");
			
			}
		
		if(strcmp(function, "sch")==0){
			
			printf("sch");
			
			}
			
		if(strcmp(function, "shw")==0){
			
			printf("shw");
			
			}
			
		if(strcmp(function, "ext")==0){
			
			flag =0;
			
			}	
	}
	
	
		
	return 0;
}