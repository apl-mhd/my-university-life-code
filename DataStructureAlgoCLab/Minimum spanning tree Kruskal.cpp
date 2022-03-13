#include <iostream>
#include<cstdio>
#include <vector>
#include <fstream>
#include <queue>
#include <map>

#define MAX_N 101
#define MAX_M 101

using namespace std;

/*
minimum spanning tree kruskal

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


int n, m;

vector<int> roots;
map<int, int>mp;
map<int, int>:: iterator it;


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
Edge E[MAX_M];

priority_queue<Edge> q; //for (u,v) minimum weight

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
        cout<<"U : "<<x<<", V : "<<y<<", W : "<<w<<endl;

        link(u, v);


    }

}

void connected_component(){
    make_set();
   

cout<<"------printing minimum spanning tree-----\n";
    while(!q.empty()){

        Edge temp = q.top();

        ds_union(temp.u, temp.v,temp.w);
        q.pop();

    }

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


    freopen("graph.txt", "r", stdin);

    scanf("%d%d",&n,&m);

  
    for(int i=0; i<m;i++){

  
        Edge temp;

        scanf("%d%d%d",&temp.u, &temp.v, &temp.w);

  
        q.push(temp);


    }

    connected_component();
   
    return 0;
}