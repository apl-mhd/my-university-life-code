#include <iostream>
#include <algorithm>
#include <cstdio>
#include <climits>
#define MAX 100
using namespace std;


int M[5][11];

int knapsack(int i,int capacity, int wt[], int val[]){

    int val1;

    if( (i==5) || (capacity < wt[i]))
        return  0;

    if(wt[i]<=capacity)
         val1= val[i] + knapsack(i+1, capacity-wt[i],wt,val);

    int val2 = knapsack(i+1, capacity, wt,val);

    M[i][capacity] = max(val1,val2);


    return M[i][capacity];


   // return max(val[i] + knapsack(i+1, capacity-wt[i],wt,val), knapsack(i+1, capacity, wt,val));



}

int main() {

    int wt[] = {1,2,3,4,5};
    int val[] = {2,1,10,3,10};

    for(int i=0;i<5; i++){

        for (int j = 0; j <11 ; ++j) {

            M[i][j]=-1;

        }
    }


    cout<<knapsack(0,5,wt,val)<<endl;


    for(int i=0;i<5; i++){

        for (int j = 0; j <6 ; ++j) {

            cout<<M[i][j]<<" ";

        }

        cout<<endl;
    }



    return 0;
}