#include <iostream>
#include <cstdio>
#include <algorithm>
#include <climits>


/*problem is minimum coin required for for make change
 *
 * you have limited supply of coin 
 *
 *
 * */
using namespace std;

int  makeCoin(int coins[], int i,  int amount, int n){




    if(amount<0)
        return 9999;

    if(amount==0)
        return 0;

    if(n<i)
        return  INT_MAX;

    return min(1+makeCoin(coins, i+1,amount-coins[i], n),  makeCoin(coins, i+1, amount, n));

}

int main() {

    int coins[] = {50,100};

    int n = sizeof(coins)/ sizeof(int);
    cout << makeCoin(coins, 0, 100, n-1)<<endl;



    for(int i=0; i<n; i++) {
        // cout << makeCoin(coins, 0, coins[i], n - 1)<<endl;
    }

    return 0;
}