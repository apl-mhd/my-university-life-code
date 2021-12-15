#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>
#include <vector>
#include <climits>
#include <algorithm>

#define MAX 100
using namespace std;

queue<int>q;
vector<int>list[MAX];
vector<int>::iterator it;
bool visited[MAX];



void visit(int u){


    for(int i=0; i<u; i++){
        visited[i] = false;

    }

}

void printGraph(int u){



    for(int i=0; i<u; i++){
        cout<<i<<": ";

        for (int j = 0; j <list[i].size() ; ++j) {

            cout<<list[i][j]<<" ";

        }

        cout<<endl;
    }

}



void graphInput(int node, int edge){

    visit(node);

    int u, v;

    for(int i=0; i<edge; i++) {

        cin >>u>>v;

        list[u].push_back(v);
        list[v].push_back(u);


    }

    //printGraph(u);
}

void BFS(){

    q.push(0); //start from 0

    while (!q.empty()){

        int top = q.front();

        cout<<top<<" ";

        visited[top] = true;

        q.pop();

        for(int i=0; i<list[top].size(); i++){

            int temp = list[top][i];

            if(!visited[temp]){

                visited[temp] = true;
                q.push(temp);

            }
        }


    }


}




int main() {


    freopen("graph.txt","r",stdin);

    int a,b;
    cin>>a>>b;
    graphInput(a,b);

    BFS();



    return 0;
}