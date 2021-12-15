#include <iostream>
#include <cstdio>
#include <algorithm>
#include <climits>
#define MAX 50
#define ROW 4000;
#define COL 4000;

int dp[4010];

void  init(int n){

    dp[0]=0;

    for (int i=1; i<n; i++) {


        dp[i] = -1;

    }
}

using namespace std;


int maximum(int a[], int n, int i){


    if(n<0 || i>2)
        return INT_MIN;



    if(dp[n] != -1)
        return dp[n];



    return dp[n] = max(1 + maximum(a, n - a[i], i), maximum(a, n, i + 1));

}

int main() {


    // freopen("input.txt","r", stdin);

    int n;
    int  arr[3];

    cin>>n>>arr[0]>>arr[1]>>arr[2];

    init(n+10);

    cout<<maximum(arr,n,0);

    return 0;
}