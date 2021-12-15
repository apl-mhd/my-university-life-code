#include <iostream>
#include <cstdio>
#include <climits>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
using namespace std;


int main() {


    int coins [] = {2,3,4,23};


    int max =999;



    int M[8];
    M[0]=0;

    for(int i=1; i<8; i++)
        M[i] = 9999;

    int track[8];
    track[0]=0;



    int sum =0 ;


    for(int i=0; i<4; i++){

        sum+=coins[i];
        
        

        for(int j=coins[i]; j<=7; j++){



            if(coins[i]<=sum){

                if(1+M[j-coins[i]]< M[j]){

                    M[j] = 1+M[j-coins[i]];


                    track[j] = coins[i];
                }

                // M[j] = min(1+M[j-coins[i]],M[j]);

            }


        }
    }



    for(int i=1; i<8; i++)
        cout<<M[i]<<" ";

    cout<<endl;

    for(int i=0; i<8; i++)
        cout<<i<<" : "<<track[i]<<endl;

    cout<<endl;

    int end =7;

    while(end !=0){

        cout<<track[end]<<" ";

        end -=track[end];
    }


    return 0;
}