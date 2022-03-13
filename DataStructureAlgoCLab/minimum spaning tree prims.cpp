#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <functional>
#include <queue>
#include <utility>
#include <list>
#include <climits>
#include <map>
#define P printf("\n");



using namespace std;
typedef pair<int, int> PAIR;

const  int INF = INT_MAX;


int main(int argc, char **argv) {
	
	
	int n, e, u,v, w;int spaningW=0;
	
	list<PAIR>:: iterator it;
	
	priority_queue<PAIR, vector<PAIR>, greater<PAIR>>q;
	
	//cout<<"code is sexy";
	cin>> n >> e;

	//cout<<"code is sexy"<<n<<" "<<e;

	bool visited[100];
	int dist[100];
	
	
	for(int i=0; i<=n; i++){
		dist[i] = 9999; visited[i]=false;
	
	}
		
	list<PAIR>graph[n+1];
	
	
	   for (int i = 1; i <= e; i++) {
 
            cin >> u >> v >> w;
 
            graph[u].push_back(make_pair(w, v));
            graph[v].push_back(make_pair(w, u));
 
        }
       
	//cout<<"end";
    
		
		q.push(make_pair(0,1));
		
		
		
		while(!q.empty()){
			
			
			w = q.top().first;
			
			u = q.top().second;
			
			q.pop();
			
			if(visited[u])
				continue;
			
			visited[u]= true;
			
			spaningW +=w;
			
			for(it = graph[u].begin(); it != graph[u].end(); it++){
				

					if(it->first< dist[it->second]){
						
						q.push(make_pair(it->first, it->second));
						
						dist[it->second] = it->first;
						
						}
				
				}
			
			
			
			}
	
	
	P;
	cout<<spaningW;


	
	/*
	 * 6 9
	 * 1 2 3
	 * 1 4 1
	 * 2 3 3
	 * 2 4 3
	 * 3 4 1
	 * 4 5 6
	 * 3 5 5
	 * 3 6 4
	 * 5 6 2
	 * 
	 * 
	 * 
	 * 
	 * 
	 * */
	
	
return 0;    
}