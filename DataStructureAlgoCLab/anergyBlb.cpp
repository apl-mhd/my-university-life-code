#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <functional>
#include <queue>
#include <utility>
#include <list>
#include <climits>

#define P printf("\n");

typedef long long int lli;
using namespace std;


int vend=0, vf;

int dp(int total,  int sum){

        if(total < 3)

            return sum;

        vf = total / 3;
        vend = total % 3;
        total = vf+vend;
        sum+=vf;

        dp(total, sum);
}


int main(int argc, char **argv) {

    int t, Case=0;

    cin>>t;

    while(t--){
        lli n, bulb,sum=0;

        cin>>n;

        sum = n / 100;

        sum= dp(sum,sum);

        //cout<<sum<<endl;

    cout<<"Case "<<Case<<": "<<sum<<" "<<vend+vf<<endl;
    }



return 0;
}