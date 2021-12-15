#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>
#include <algorithm>
#include <vector>
#define MAX_SZ 100
#include <climits>
#include <utility>


 long  long unsigned  int  dist[MAX_SZ];
int visited[MAX_SZ];
int parent[MAX_SZ];



using namespace std;



/*
5 10
0 1 6
0 3 7
1 4 -4
1 3 8
1 2 5
2 1 -2
3 2 -3
3 4 9
4 0 2
4 2 7

*/

int n,m;
vector< vector< pair<int, int> > >adj;


//priority_queue< pair<int , int >,  vector< pair<int, int> >,  greater<pair<int ,int >>   > q;
//priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>q;

queue< pair<int,int> >q;


void print_graph(){

    printf("|V| : %d  |E| : %d \n", n, m);

    for(int i=0; i<n; i++){

        printf("%d -> ",i);

        for(int j=0; j < adj[i].size(); j++){

            printf("%d, %d ", adj[i][j].first, adj[i][j].second);
        }

        printf("\n");
    }

}


void init(int s){

    for(int i=0; i< n; i++){
        dist[i] = INT_MAX;
        //visited[i] = 0;
        //parent[i] = -1;

    }

    dist[s]=0;

}



void bellMan(int s){

    init(s);

    for (int j = 0; j <n-1 ; ++j) {

        for(int k=0; k<n; k++){

            // cout << u << ": \n";

            for (int i = 0; i < adj[k].size(); ++i) {



                int v = adj[k][i].first;
                int vw = adj[k][i].second;

               // cout<<k<<" "<<v<<" "<<vw<<endl;
                int uw = dist[k];

                int tw = uw + vw;

                if (tw < dist[v]) {
                    dist[v] = tw;

                    //parent[v] = u;
                    // cout << v << " " << w << endl;

                }

            }

        }

    }//end outer for loop
    cout<<"\n";
}



void  printpathRecursion(int i){


    if(parent[i] ==-1)
        return;

    printpathRecursion(parent[i]);

    cout<<parent[i]<<" ";


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

    // print_graph();

    bellMan(0);


    for (int j = 0; j <n ; ++j) {
        cout<<j<<" "<<dist[j]<<endl;

    }



    // printpath(2);

/*
    cout<<"\n-----printing path-----\n";

    cout<<" V : "<<0<<", Path: 0"; printpathRecursion(0);
    cout<<" Cost : "<<dist[0]<<endl;


    for(int i=1; i<n; i++){

        cout<<" V : "<<i<<", Path: ";
        printpathRecursion(i);
        cout<<" "<<i;
        cout<<", Cost : "<<dist[i]<<endl;


    }


*/


    return 0;
}