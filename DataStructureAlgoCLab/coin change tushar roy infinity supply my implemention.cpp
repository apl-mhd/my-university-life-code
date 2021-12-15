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


int coins [] = {0,2,3,4,7};


    int max =999;

    int M[5][8];

    for(int i=0; i<=4; i++){
        for(int j=0; j<=7; j++){


            if(i==0 || j==0) {

                M[i][j] = max;
                //break;
            }
            else

            if(j<coins[i]){

                M[i][j]= M[i-1][j];

                //cout<<"aa";
            }
            else if(j-coins[i] == 0)
                M[i][j] = 1;

            else{

                M[i][j] = min(M[i-1][j], 1+M[i][j-coins[i]]);
            }
        }

    }

    for(int i=0; i<=4; i++){
        for(int j=0; j<=7; j++) {

            cout<<M[i][j]<<" ";

        }

        cout<<endl;
    }

            cout<<"end";

    return 0;
}