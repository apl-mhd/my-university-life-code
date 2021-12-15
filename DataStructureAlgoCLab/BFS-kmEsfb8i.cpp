#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <string.h>
using  namespace std;
struct list {
	int val;
	struct list * next;
};


typedef struct list node;

node *Insert(node *head, int edg){
		
		node *temp;
		temp = new node();
		temp->val = edg;
		temp->next = head;
		return temp;
	
}


void BFS(node *graph[], int vertices, int parent[], int level[]){
		
		int flag=1, par, lev=0,i;
		level[1] = lev;
		node *temp;
		while(flag){
			flag=0;
			
			for(i=1; i<=vertices; i++){
				
				if(level[i] == lev){
					flag = 1;
					temp = graph[i];
					par=i;
					
					
					while(temp!=NULL){
						
							if(level[temp->val] !=-1){
								temp = temp->next;
								continue;
							}
							
							level[temp->val] = lev+1;
							cout<<"x";
							parent[temp->val] = par;
							temp=temp->next;								
						}
				}
				
			}
			
		++lev;		
	}
		
		
}

int main(){
int vertices, v1,v2,i, edges;

	cout<<"enter number of vertices:";
		cin>>vertices;
	cout<<"number of edges:";
		cin>>edges;
	
	int level[vertices+1] , parent[vertices+1];
	
	node *vertex[vertices+1] = {NULL};
	
	
	for(i=0; i<=vertices; i++){
		
		level[i] = -1;
		parent[i] = 0;
		}
	
	for(i=1; i<=vertices; i++){
		
		cin>>v1>>v2;
		
		vertex[v1] = Insert(vertex[v1], v2);
		vertex[v2] = Insert(vertex[v2], v1);
		
		
		}
		
	for (i = 1; i <= vertices; ++i) {
		printf("%d -> ", i);

		 node * temp = vertex[i];

		while (temp != NULL) {
			printf("%d -> ", temp->val);
			temp = temp->next;
		}

		printf("NULL\n");
	}


	
	
	
	
	
	BFS(vertex, vertices,parent,level);
	
	for (i = 1; i <= vertices; ++i) {
		printf("Level of Node %d is %d, Parent is %d\n", i, level[i], parent[i]);
	}

	return 0;
}