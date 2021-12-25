#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int count(vector<int>& arr, int v, int n, vector<vector<int>> & dp){

    if (v == 0)
        return dp[n][v] = 1;

    if (n < 0)
        return 0;

    if ( dp[n][v] != -1)
        return dp[n][v];

    if (arr[n-1]<=v)

        return count(arr, v, n-1, dp) + count(arr, v - arr[n-1], n, dp);
    else

        return dp[n][v] = count(arr, v, n-1, dp);

}

int main()
{

   int i=5;
cout<<i++<<endl;
cout<<++i<<endl;


    vector<int> arr{1,2,3};
    int n = arr.size();
    int v = 5000;

    vector<vector<int>> dp(n+1, vector<int>(v+1, -1));

   // cout<<count(arr, v, n, dp)<<endl;


    return 0;
}
