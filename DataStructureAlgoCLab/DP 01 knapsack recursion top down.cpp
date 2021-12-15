#include <iostream>
#include <cstdio>
#include <algorithm>

using  namespace std;



int kn(int w, int n, int wt[], int val[]){

    if(w==0 || n==0)
        return 0;

    if(wt[n-1]> w)
        return kn(w, n-1, wt,val);

    return max(val[n-1]+kn(w-wt[n-1],n-1,wt,val), kn(w,n-1,wt,val));

}



int main() {


    int wt [] ={1,3,4,5};
    int val [] = {1,4,5,7};

    int w=7;

    int size = sizeof(wt)/4;



    cout<<kn(w,size,wt,val);






    return 0;
}