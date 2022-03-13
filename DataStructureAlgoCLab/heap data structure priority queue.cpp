#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>
#include <algorithm>
#include <vector>
#include <climits>
#include <utility>

#define MAX_SZ 100

using  namespace std;

struct  compare{

    bool operator()(const int& lhs, const int& rhs) const {

        return lhs >rhs;

    }
};

struct  A{

    int a,b;

    bool operator()(const A& rhs)const {

        return b<rhs.b;
    }

};




int main() {



    priority_queue<int,vector<int>, compare > pq;


    pq.push(10);
    pq.push(9);
    pq.push(8);

    while(!pq.empty()){

        cout<<pq.top()<<endl;
        pq.pop();
    }


    return 0;
}