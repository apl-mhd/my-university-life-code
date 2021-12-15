#include <iostream>
#include<cstdio>
#define MAX_N 101
#define MAX_M 101
#include <vector>
#include <fstream>
#include <map>
using namespace std;
/*
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

vector<int> roots;


struct Set{
    int parent, rnk;
};

struct Edge{

    int u, v;

};

Set S[MAX_N];
Edge E[MAX_M];

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
        S[v].parent = u;
        if(S[u].rnk == S[v].rnk)
            ++S[u].rnk;
    }
}

void ds_union(int x, int y){
    int u = find_set(x);
    int v = find_set(y);

    S[x].parent = u;
    S[y].parent = v;


    if(u != v)
        link(u,v);

}

void connected_component(){
    make_set();
    for(int i=0; i<m;i++){
        ds_union(E[i].u,E[i].v);

    }

    for(int i=0; i<n; i++)
        printf(" %d =  %d \n", i, S[i].parent);

    printf("\n");

}

void find_roots(){

    for(int i=0; i<n; i++){
        int r = find_set(i);
        int flag =0;
        for(int j=0; j<roots.size(); ++j){
            if(roots[j] == r){
                flag = 1;
                break;
            }

        }
        if(flag == 0) roots.push_back(r);

    }

    for(int i=0; i<roots.size(); i++){

        printf("%d", roots[i] );
    }
    cout<<"\n";
}


int main()
{

    map<int, int>mp;
    map<int, int>:: iterator it;

    mp[1]=1;
    mp[2] = 2;


    for(it = mp.begin(); it != mp.end(); it++){

        cout<<it->first<<" "<<it->second<<endl;

    }

    freopen("graph.txt", "r", stdin);

    scanf("%d%d",&n,&m);

    //cout<<n<<m<<endl;

    for(int i=0; i<m;i++){

        //cout<<i;
        scanf("%d%d",&E[i].u,&E[i].v);
       // printf("%d %d\n", E[i].u, E[i].v);

    }
    connected_component();
    find_roots();
    return 0;
}