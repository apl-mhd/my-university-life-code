#include<cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <functional>
#include <queue>
#include <utility>

#define P printf("\n");


using namespace std;

typedef pair<int, int>PAIR;

	vector<int>dist(10, 9999);
	int visited[100]={0};
	
	int par[7]={0,1,2,3,4,5,6};
	

	int find(int r){
		
		if(par[r]==r)
			return r;
		return find(par[r]);
		
		}
		
	void unioN(int a, int b){
		
		if(find(a)==find(b))
			cout<<"already friend\n";
		
		else if(find(a)==a&&find(b)!=b)
				par[a]=b;
		else if(find(a)!=a&&find(b)==b)
		
				par[b]=a;
		else
			par[b]=a;
		
		}


int main(int argc, char **argv)
{
		par[1]=0;
		par[2]=0;
		par[3]=0;

		//unioN(1,2);
		//unioN(3,0);
		unioN(3,4);
		//par[4]=3;
		//par[3]=0;
		unioN(6,5);
		
		cout<<find(5)<<"\n";
		

    return 0;
}