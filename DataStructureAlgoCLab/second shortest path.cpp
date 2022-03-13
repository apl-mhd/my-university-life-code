/*lots of hard work :)*/
//code is sexy
#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <utility>
#include <functional>
#include <list>
#include <climits>
#include <algorithm>
#include <cstdio>

using namespace std;

#define N printf("\n");

typedef  pair<int, int>PAIR;
int main() {

    priority_queue<PAIR,vector<PAIR>, greater<PAIR>>q;

    int n,e,u,v,w;

    cin>>n>>e;

    list<PAIR>graph[n+1];

    list<PAIR>::iterator it;

    for(int i=0; i<e; i++){

        cin>>u>>v>>w;

        graph[u].push_back(make_pair(w,v));
        graph[v].push_back(make_pair(w,u));
    }

    int dist[n];
    vector<int> result;
    bool visited[n];



    for(int i=0; i<=n; i++){

        dist[i]= INT_MAX;
        visited[i]= false;


    }

    dist[1]=0;


    q.push(make_pair(0,1));



    while (!q.empty()){

        int w = q.top().first;
        int edge =q.top().second;
        q.pop();

        visited[edge]= true;

        for(it = graph[edge].begin(); it !=graph[edge].end(); it++ ){

            if(it->first < dist[it->second] && visited[it->second] ==false){



                if(it->second == n)
                    result.push_back(it->first+dist[edge]);
                else {
                    dist[it->second] = it->first + dist[edge];
                    q.push(make_pair(it->first, it->second));
                }

            }
            ////cout<<i<<" "<<it->second<<" "<<it->first<<endl;

        }

    }



    sort(result.begin(), result.end());
    cout<<result[1]<<endl;

    return 0;
}