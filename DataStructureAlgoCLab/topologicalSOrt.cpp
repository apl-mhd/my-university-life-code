#include <iostream>
#include <cstdio>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
/*
8 8
0 1
1 2
2 3
2 4
4 5
6 1
6 7
7 4


*/


vector<vector<int>>adj;
int m,n;

stack<int>st;

int visited[100];

void init(){

    for(int i =0; i<100; i++){

        visited[i]=0;

    }
}


void printGraph(){

    for (int j = 0; j <m ; ++j) {

        for (int i = 0; i <adj[j].size() ; ++i) {

            cout<<j<<" "<<adj[j][i]<<endl;
        }
    }

}

void dfs(int s){

    visited[s]=1;

    if(adj[s].size()==0){

        st.push(s);
         //cout<<s<<" ";
        return;
        }

    for(int i=0; i<adj[s].size(); i++){

        if(visited[adj[s][i]] == 0) {
            dfs(adj[s][i]);
            visited[adj[s][i]] = 1;
        }
    }

    //cout<<s<<" ";
    st.push(s);


}

int main() {

    adj.resize(10);

    freopen("graph.txt","r",stdin);

    cin>>n>>m;

    cout<<n<<m<<endl;

    int u,v;

    for (int i = 0; i <m ; ++i) {

        cin>>u>>v;

        adj[u].push_back(v);

       // cout<<u<<" "<<v<<endl;

    }


    printGraph();

    init();


    for (int j = 0; j <n ; ++j) {

        if(visited[j] == 0)
            dfs(j);
    }



    while(!st.empty()){

        cout<<st.top()<<" ";
        st.pop();
    }

    cout<<endl;



    return 0;
}