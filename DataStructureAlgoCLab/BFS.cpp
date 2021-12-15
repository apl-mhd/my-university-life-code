#include <iostream>
#include <queue>

using namespace std;

queue<int> number;


int graph[50][50] = {0};

int edges, vertices;

int visited[100] = {0};

void graphInput(){
		
	cout<<"Input number of vertices"<<endl;
	cin>>vertices;
	cout<<"Input number of edges"<<endl;
	cin>>edges;
	int v1, v2;
	
	
	for(int i=1; i<edges+1; i++){
			
			cin>>v1>>v2;
			graph[v1][v2]=1;
			graph[v2][v1]=1;
		
		}
	
	}
	
bool isVisited(int v){
	
	for(int i=0; i<100; i++){
	if(visited[i] == v)
		return true;
	
	
	}
return false;
}
void BFS(){
	number.push(2);
	int t,index=0;
	while(!number.empty()){
		
		t = number.front();
		number.pop();
		for(int i =1; i<=vertices; i++){
			
			if(graph[t][i]){
				
				if(isVisited(i) == false )
					number.push(i);			
				}
						
			}
		
		
		if(isVisited(t) == false)
			visited[index++] = t;
		
	}
	
}	


void displayGraph(){	
	for(int i=1; i<=vertices; i++){
			cout<<i<<"->";
		for(int j=1; j<=vertices; j++){
				if(graph[i][j])
					cout<<j<<" ";
			}
			
			cout<<endl;
		
		}
	
}

int main(int argc, char **argv)
{
	
	graphInput();
	BFS();
	displayGraph();
	for(int i=0; i<=vertices; i++){
	
		if(visited[i] >0)
			cout<<visited[i]<<" ";
	}
	
	
	
	return 0;
}