/*infinity supply*/

#include <iostream>
#include <cstdio>

using namespace std;

int coinChange(int coins[], int i, int make, int amount){

    if(i>=5){

        if(make == amount)
            return  1;
        else

        return 0;

    }

    int a,b;

    if(coins[i]+make <= amount)
         a = coinChange(coins,i,make+coins[i], amount);

     b = coinChange(coins,i+1,make, amount);



    return a||b;


}


int rtrn(){

    return  1 < 0;
}

int main() {


   // cout<<rtrn();

    int coins[] = {5,5,5};

    cout<<coinChange(coins,0,0,10);


    return 0;
}