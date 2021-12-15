#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>
#include <algorithm>
#include <vector>
#define MAX_SZ 100
#include <climits>
#include <utility>


using namespace std;

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


//priority_queue< pair<int , int >,  vector< pair<int, int> >,  greater<pair<int ,int >>   > q;
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



}

int min_dist_vertex(){

    return  0;

}


void dijkstra(int s){

    init(s);
    q.push(make_pair(0,0));

    while(!q.empty()){

        pair<int,int>p;

        p = q.top();
        q.pop();

        int u = p.second;
        int uwt = p.first;

        cout<<u<<" ";

        visited[u] = 1;


        for (int i = 0; i < adj[u].size() ; ++i) {

            int v =adj[u][i].first;
            int w = adj[u][i].second;


            int tw = uwt + w;

            if(visited[v] == 0 && tw < dist[v]) {
                dist[v] = tw;
                q.push(make_pair(tw,v));

                parent[v] = u;

            }


        }

    }


}

void printpath(int i){

    while( parent[i] !=-1){


        int back = parent[i];

        cout<<back<<" ";

        i = parent[i];

    }


}

void  printpathRecursion(int i){


    if(parent[i] ==-1)
        return;

        printpathRecursion(parent[i]);

    cout<<parent[i];


}

int main()
{
    adj.resize(MAX_SZ);
    freopen("graph2.txt", "r", stdin);
    scanf("%d%d",&n,&m);



    for(int i=0; i<m; i++){
        int u, v,w;

        scanf("%d%d%d",&u,&v,&w);
        adj[u].push_back(make_pair(v,w));

    }

    //print_graph();

    dijkstra(0);


    cout<<endl;

    for (int j = 0; j < n ; ++j) {

        cout<<j<<" "<<dist[j]<<endl;

    }

    printpath(2);

 //   printpathRecursion(2);



    return 0;
}