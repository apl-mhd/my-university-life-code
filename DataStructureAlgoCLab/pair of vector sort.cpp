#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;


bool compare(const pair<int, int> i, const pair<int, int> j)
{
    return  j.first > i.first ;
}



int main() {

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