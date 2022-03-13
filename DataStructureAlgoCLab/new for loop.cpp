#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

#include <queue>

using namespace std;


bool compare( pair<int, int> i,  pair<int, int> j)
{
    return  j.first > i.first ;
}



int main() {


    int a [] = {1,2,3,4};

    for(int n : a)
        cout<<n<<" ";


    cout<<endl;


    priority_queue<int, vector<int>, greater<int>>q;



    q.push(10);
    q.push(9);
    q.push(18);

    cout<<"Q sort"<<endl;


    while(!q.empty()){

        cout<<q.top()<<" ";

        q.pop();
    }




    cout<<"\nvector pair\n";



    vector<pair<int, int>> v;

    v.push_back(make_pair(10,100));
    v.push_back(make_pair(9,2));
    v.push_back(make_pair(8,3));
    v.push_back(make_pair(7,4));
    v.push_back(make_pair(6,500));



    sort(v.begin(),v.end(),compare);

    vector<pair<int,int>>::iterator it;

    for( it = v.begin(); it!=v.end(); it++){

        cout<<it->first<<" "<<it->second<<endl;

    }


    return 0;
}