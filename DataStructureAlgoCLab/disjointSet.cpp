#include <iostream>
#include<cstdio>
#define MAX_N 101
#define MAX_M 101
#include <vector>
#include <fstream>
#include <map>
using namespace std;
/*
save it to graph.txt file
10 7
0 1
0 2
1 2
1 3
4 5
4 6
7 8

*/


int n, m;
struct  Set{

    int parent, rank;

};

struct  Edge{

    int u,v;


};

map<int, int>mp;
map<int, int>::iterator it;


Set s[MAX_N];
Edge e[MAX_M];


void makeSet(){

    for(int i=0; i<n; i++){
        s[i].parent = i;
        s[i].rank = 0;

    }
}

int findSet(int x){

    if(s[x].parent !=x)
        return s[x].parent = findSet(s[x].parent);

    return  x;

}

void link(int u, int v){

    if(s[u].rank > s[v].rank){

        s[v].parent = u;
    }
    else{

      s[u].parent = v;
        if(s[u].rank == s[v].rank)
            s[v].rank++;

    }
}

void dsUnion(int x, int y){

    int u = findSet(x);
    int v = findSet(y);

    if(u !=v){

        link(u,v);
    }

}


void connectedComponent(){
    makeSet();
    for(int i=0; i<m; i++){

        dsUnion(e[i].u,e[i].v);
    }

    for(int i=0; i<n; i++){

        mp[findSet(i)]=1;

       // cout<<i<<" "<<findSet(i)<<endl;

        //dsUnion(e[i].u,e[i].v);
    }

}


int main() {

    freopen("graph.txt", "r",stdin);

    cin>>n>>m;

    for (int i = 0; i <m ; ++i) {

        cin>>e[i].u>>e[i].v;

    }

    connectedComponent();


    for (it = mp.begin(); it != mp.end(); it++) {

        cout<<it->first<<endl;

    }

  return 0;
}