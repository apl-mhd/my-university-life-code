#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;


int kn(int val[], int wt[], int w, int n){

    if(n==3 || w <wt[n])
        return  0;
    
    return max(val[n] +kn(val,wt, w-wt[n],n+1), kn(val, wt, w, n+1));
}

int main() {


    int val[] = {600,100,120};
    int wt[] = {10,20,30};

    cout<<kn(val, wt,50,0);

    return 0;
}