#include <cstring>
#include <cstdio>
#include <map>
#include <algorithm>
#include <stack>
#include <queue>
#include <climits>
#include <iostream>

using  namespace std;




int coin[]={2,3,4,7}; //value of coins available
int make = 11; //our target value

int dp[100][100];

int call(int i,int amount)
{

    if(i < 0){
        return  999;
    }

    if(amount < 0)
        return 999;



    if(dp[i][amount] == -1 ){



        if(amount-coin[i] == 0){
            return 1;

        }


        int x =  min(1+call(i-1, amount-coin[i]),call(i-1,amount));
        dp[i][amount] = x;

        return dp[i][amount];

    }

    return dp[i][amount];


}
int main()
{


   //




    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){

            dp[i][j]=-1;
        }
    }



    cout<<call(3,13)<<endl;



    for(int i=0; i<15; i++){
        for(int j=0; j<15; j++){

            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}