#include <iostream>
#include <cstdio>

using namespace std;
int M[8];
int S[8];

int makeChane(int c[], int n){

    if(M[n] == -1){

        int minval=9999, coinval =-1;

        for(int i=0; i<4; i++){

            if(c[i]<=n){

                int tval = 1+makeChane(c, n-c[i]);

                    if(tval<minval) {
                        minval = tval;
                        coinval = c[i];
                    }

            }

        }

        M[n] = minval;
        S[n] = coinval;

    }

    return M[n];

}


int main() {

    M[0]=0;

    for(int i=1; i<8; i++)
        M[i]=-1;

    int coins[]= {2,3,4,90};
    int n=7;
    cout<<"Total "<<makeChane(coins, n)<<" coins need to make "<<n<<endl;


    int end = 7;

    cout<<"coins are:"<<endl;

    while(end !=0 ){

        cout<<S[end]<<" ";

        end -=S[end];


    }
    cout<<endl;


    return 0;
}