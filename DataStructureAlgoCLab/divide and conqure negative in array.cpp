#include <iostream>
#include <cstdio>

using namespace std;

int count(int A[], int start, int end){

    if(start == end){

        if(A[start] <0)
            return  1;
        else
            return 0;


    }

    int mid = (start +end) /2;

    return count(A, start, mid) + count(A, mid+1, end);

}

int main() {


    int A[] ={1,-2,3,-5,6};

    cout<<count(A, 0, 3)<<endl;

    return 0;
}