#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
#include <climits>
#include <utility>      // std::pair


using namespace std;

int main() {

    vector<pair<int,int>>a;

    vector<pair<int, int>>::iterator it;





    a.push_back(make_pair(10,20));

    cout<<a[0].first;



    for( it = a.begin(); it != a.end(); it++){

        cout<<(*it).first;

    }




    return 0;
}