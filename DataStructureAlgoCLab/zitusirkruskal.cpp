#include <iostream>
#include<cstdio>
#include <vector>
#include <queue>
using namespace std;
#define MAX_N 101


int m,n,wt=0;


struct Set{
    int parent, rnk;
};

struct Edge{

    int u, v,w;

    bool operator<(const Edge& rhs) const {

        return w > rhs.w;
    }

};

Set S[MAX_N];
priority_queue<Edge> q;
vector<pair<int,int> > mstEdge;



void read_graph() {


    for (int i = 0; i <m ; ++i) {

        Edge temp;

        scanf("%d%d%d",&temp.u, &temp.v, &temp.w);
        q.push(temp);

    }


}

void make_set(){

    for(int i=0; i<n; i++){
        S[i].parent = i;
        S[i].rnk = 0;

    }
}



int find_set(int x){

    if(S[x].parent !=x)
        return S[x].parent = find_set(S[x].parent);
    return x;
}


void link(int u, int v){

    if(S[u].rnk > S[v].rnk){

        S[v].parent = u;
    }
    else{

        S[u].parent = v;
        if(S[u].rnk ==S[v].rnk)
            S[v].rnk++;

    }
}



void ds_union(int x, int y, int w){
    int u = find_set(x);
    int v = find_set(y);

    if(u != v) {

        wt +=w;
        mstEdge.push_back(make_pair(x,y));

        link(u, v);
    }

}





void kruskal() {


    make_set();

    while(!q.empty()){

        Edge temp = q.top();

        ds_union(temp.u, temp.v,temp.w);
        q.pop();

    }



}

void print_mst() {

    for (int i = 0; i <mstEdge.size() ; ++i) {

        pair<int, int> temp = mstEdge[i];
        
        printf("%d %d\n",temp.first,temp.second);
    
    }


    cout<<wt<<endl;

}


int main() {

    freopen("input.txt", "r", stdin);

    scanf("%d%d",&n,&m);

    read_graph();

    kruskal();

    print_mst();


    return 0;
}