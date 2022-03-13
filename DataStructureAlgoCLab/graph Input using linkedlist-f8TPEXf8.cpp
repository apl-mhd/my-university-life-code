#include <iostream>
#include <cstdio>

using namespace std;

struct Edge{
	int vertex;
	struct Edge *next;
	
};

typedef struct Edge node;

node *Insert(node *currentHead, int newVertex){
	
	node *tempVertex;
	tempVertex = new node();
	tempVertex->vertex = newVertex;
	tempVertex->next = currentHead; 
	
	return tempVertex;
}

int main(int argc, char **argv)
{
	int vertices, edges, i, v1, v2;
	
	cout<<"Number of vertices"<<endl;
		cin>>vertices;
	cout<<"Number of Edges"<<endl;
		cin>>edges;
	
	node *adjanceyList[vertices+1] = {NULL};
	
	
	for(i=0; i<edges; i++){
		
		cin>>v1>>v2;
		adjanceyList[v1] = Insert(adjanceyList[v1], v2);
		adjanceyList[v2] = Insert(adjanceyList[v2], v1);
		
		
		}
		
	for(i=1; i<=vertices; i++){
		
		node *temp;
		
		temp = adjanceyList[i];
		cout<<"Adjacencylist["<<i<<"]:";
		while(temp !=NULL){
			
			printf("%d->", temp->vertex);
			//cout<<temp->vertex;
			
			temp=temp->next;
			}
			cout<<"NULL"<<endl;
		
		
		}
	
	
	
	
	return 0;
}