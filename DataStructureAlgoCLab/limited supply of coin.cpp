#include <iostream>
#include <cstdio>

/*limited supply of coins*/

using namespace std;


bool  makeCoine(int coins[], int i,  int amount){


    if(i>3){


        if(amount == 0)
            return true;
        else
            return false;

    }


    bool  a,b;
    if(coins[i] <= amount){

        a = makeCoine(coins, i+1,amount-coins[i]);
    }

    else{

        b = makeCoine(coins, i+1, amount);
    }


    return a || b;



}

int main() {

    int coins[] = {5,6,15,18};


    cout<<makeCoine(coins,0,11);

    return 0;
}