#include<cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <functional>
#include <queue>
#include <utility>

using namespace std;

typedef pair<int, int>PAIR;

	vector<int>dist(10, 9999);
	int visited[100]={0};
void graphInput(int edges,  int graph[50][50], vector<int> dist){
				
	int weight;
	
	for(int i=0; i<edges; i++){
		
		int x, y;
		cin>>x>>y>>weight;
		
		graph[x][y]=weight;
		graph[y][x]=weight;
		
		
		}
		
	
	}
	
	
	
	void dijsktra(int graph[50][50]){
	
		priority_queue<PAIR, vector<PAIR>, greater<PAIR>> q;
		
		
		int v, w;
		
		q.push(make_pair(0,0));
		
		dist[0]=0;
		
		while(!q.empty()){
			
			
			
			
			
			v=q.top().second;
			w=q.top().first;
			//cout<<v<<w<<"vw";
			visited[v]=1;
			
			q.pop();
			
			for(int i=0; i<50; i++){
				
				if(graph[v][i] !=0 && visited[i] !=1){
					
		//			cout<<"ff";
					
					if(dist[i] > graph[v][i] + dist[v]);
					
					dist[i] = graph[v][i] + dist[v];
					
					q.push(make_pair(dist[i], i));
					
					
					}
				
				
				
				}
			
			
			
			}		
		
		}
	

	void displayGraph(int V, int E, int graph[50][50]){
		
		
	for(int i=0; i<V; i++){
		
		for(int j=0; j<E;j++){
			
			cout<<graph[i][j]<<" ";
			}
			
			cout<<"\n";
		}

		
		}
		


int main(int argc, char **argv)
{

	int graph[50][50]={0};
	
	int V,E;
	cout<<"number of vertices\n";
	cin>>V;
	cout<<"number of edges\n";
	cin>>E;
	
	cout<<"input graph:\n";



	
	graphInput(E,graph, dist);
    
	dijsktra(graph);
   
    for(int i=0; i<V; i++){
		
		cout<<i<<" :"<<dist[i]<<"\n";
		
		}
	
	
    
    
     
	//displayGraph(V,E);

    return 0;
}