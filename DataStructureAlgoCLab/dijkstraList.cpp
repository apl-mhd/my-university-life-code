#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <functional>
#include <queue>
#include <utility>
#include <list>
/*
	(1)----------w=10----------(2)
	 |                       /   | 
	 |     			_______/	 |
	w=1___________/ 			w=20
	 |/						    |
	 (3)--------- w=2 ----------(4)


		graph v(1,2,3,4)
		

*/

using namespace std;

typedef pair<int, int>PAIR;

int main(int argc, char **argv)
{
	/*
	list<int>y;
	list<int>::iterator iit;
	y.push_back(1);
	y.push_back(2);
	y.push_back(3);
	y.push_back(4);
	
	*/
	
	
	int n,m,u,v,w;
	
	cout<<"input number of bvertices and number of edges\n";
	
	cin>>n>>m;
	
	list<PAIR>x[n+1];
	
	vector<int>dist(n+1,1000010);
	
	list<PAIR>::iterator it;
	
	priority_queue<PAIR, vector<PAIR>, greater<PAIR>>q;
	

	
	
	for(int i=0; i<m; i++){
		
		cin>>u>>v>>w;
		
		x[u].push_back(make_pair(w,v));
		x[v].push_back(make_pair(w,u));
				
		}
		
	q.push(make_pair(0,1));
	
	while(!q.empty()){
		
	//	w=q.top().first;
	
		dist[1]=0;
		u=q.top().second;
		q.pop();
		
		for(it=x[u].begin(); it!=x[u].end(); it++){
			
			
			w = (*it).first;
			v = (*it).second;
			
			if(dist[v] > dist[u]+w){
				
				dist[v] = dist[u]+w;
				q.push(make_pair(dist[v], v));
				
				}
				
				
			
			
			
			}
		
		}
		


	for(int i=1; i<=n; i++){
		
		cout<<"vertices->           edges \n";
		cout<<i<<" "<<dist[i]<<" \n";
		
		
		}


/*		
		
	for(int i=1;i<=n;i++){
		
		for(it=x[i].begin(); it !=x[i].end(); it++){
			
			cout<<i<<" "<<(*it).first<<" "<<(*it).second<<"\n";
		
			
			}
			
		}

*/
		

	
	
	
}