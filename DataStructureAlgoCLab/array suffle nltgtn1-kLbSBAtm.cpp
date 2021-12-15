#include <iostream>
#include <cstdio>
using namespace std;


void suffle(int a[], int start, int end, int n){

    int mid = (start + end) /2;

    if(start != end){


        suffle(a,start, mid, n);
        suffle(a,mid+1, end,n);
        if(!(start ==0 && end ==n) )
        cout<<"("<<a[start+1]<<")"<<":"<<"("<<a[start]<<")";

    }


}

int main() {


    int a[] = {1,2,3,4};

    suffle(a, 0, 3,3);
    return 0;
}