#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>
#include <algorithm>
#include <vector>
#define MAX_SZ 100
#include <climits>

using namespace std;
//graph
/*
5 10
0 1 10
0 3 5
1 2 1
1 3 2
2 4 4
3 1 3
3 2 9
3 4 2
4 0 7
4 2 6

*/

int n,m;
vector< vector< pair<int, int> > >adj;

void print_graph(){

    printf("n : %d, %d : m\n", n, m);

    for(int i=0; i<n; i++){

        printf("%d -> ",i);

        for(int j=0; j < adj[i].size(); j++){

            printf("%d %d ", adj[i][j].first, adj[i][j].second);
        }

        printf("\n");
    }

}
int dist[MAX_SZ];
int visited[MAX_SZ];
int parent[MAX_SZ];


void init(int s){

    for(int i=0; i< n; i++){
        dist[i] = INT_MAX;
        visited[i] = 0;
        parent[i] = -1;

    }

    dist[s]=0;

}

void relax(int u, int v, int w){

        if(dist[v] > dist[u]+w){
            dist[v] = dist[u] +w;
            parent[v] = u;
        }


}

int min_dist_vertex(){
    int m = INT_MAX;
    int mi=-1;

      for(int i=0; i< n; i++){

      if(visited[i] == 0 && dist[i]<m){

        m = dist[i];
        mi = i;
      }

    }

    return mi;
}


void dijkstra(int s){
            //visited[]

    init(s);

      for(int i=0; i< n; i++){

       int u = min_dist_vertex();
      // cout
        visited[u] = 1;
       for(int j=0; j<adj[u].size(); j++){
        relax(u,adj[u][j].first, adj[u][j].second);
       }
    }


    cout<<"shortest path"<<endl;


    for(int i=0; i<n; i++){
        printf("%d %d \n", dist[i], parent[i]);
    }

}
int main()
{
    adj.resize(MAX_SZ);

    freopen("input.txt", "r", stdin);
    scanf("%d%d",&n,&m);



    for(int i=0; i<m; i++){
       int u, v,w;

       scanf("%d%d%d",&u,&v,&w);
       adj[u].push_back(make_pair(v,w));

    }

    print_graph();

    dijkstra(0);


    return 0;
}