#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int maxArray(int arr[],int start, int end){


        if(start==end)
            return arr[start];

    int mid = (start+end) / 2;

    return max(maxArray(arr,start, mid), maxArray(arr,mid+1, end));

}

int main() {



    int number[]={1,2,100,4,5};

    cout<<maxArray(number,0,4);


    return 0;
}