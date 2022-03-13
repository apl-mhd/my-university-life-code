#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>
#include <algorithm>
#include <vector>
#include <climits>
#include <utility>
#include <map>
#define MAX_SZ 100
using namespace std;

/*
6 9
0 1 1
0 2 3
2 1 3
2 3 1
1 3 1
3 5 5
3 4 4
4 5 2
1 5 6
*/

/*
 Input:

       1       6
 (0)------(1)-------(5)
  |      /  |        |
  |     /   |        |
3 |   3/    | 1      | 2
  |   /     |        |
  |  /      |        |
  | /       |        |
 (2)------(3)------(4)
       1        4

*/


/*

Output:

       1
 (0)------(1)      (5)
           |        |
           |        |
           | 1      |  2
           |        |
           |        |
           |        |
 (2)------(3)------(4)
       1       4

*/

int n,m;

int dist[MAX_SZ];
int visited[MAX_SZ];
int parent[MAX_SZ];

map<int, pair<int,int>> mp;
vector< vector< pair<int, int> > >adj;
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>q;



void print_graph(){

    printf("n : %d, %d : m\n", n, m);

    for(int i=0; i<n; i++){

        // printf("%d -> ",i);

        for(int j=0; j < adj[i].size(); j++){



            printf("(%d, %d ) -> %d \n",i, adj[i][j].first, adj[i][j].second);
        }

        printf("\n");
    }

}


void init(int s){

    for(int i=0; i< n; i++){
        dist[i] = INT_MAX;
        visited[i] = 0;
        parent[i] = -1;

    }

    dist[s]=0;

}


void dijkstra(int s){

    init(s);
    q.push(make_pair(0,0));

    while(!q.empty()){

        pair<int,int>p;

        p = q.top();
        q.pop();

        int u = p.second;
        cout<<u<<" ";

        visited[u] = 1;


        for (int i = 0; i < adj[u].size() ; ++i) {

            int v = adj[u][i].first;
            int w = adj[u][i].second;
            if(visited[v] == 0 && w < dist[v]) {
                dist[v] = w;
                q.push(make_pair(w,v));
                mp[v] = make_pair(u,v);

            }
        }
    }
}


int main()
{

    adj.resize(MAX_SZ);
    freopen("graph.txt", "r", stdin);
    scanf("%d%d",&n,&m);



    for(int i=0; i<m; i++){
        int u, v,w;

        scanf("%d%d%d",&u,&v,&w);
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));

    }

    //print_graph();


    dijkstra(0);


    cout<<endl;

    for (int j = 0; j <n ; ++j) {

        //cout<<j<<" "<<dist[j]<<endl;

        cout<<mp[j].first<<" "<<mp[j].second<<endl;

    }




    return 0;
}