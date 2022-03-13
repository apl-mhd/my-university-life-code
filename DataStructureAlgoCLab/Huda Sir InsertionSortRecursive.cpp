#include <iostream>
#include <cstdio>
using namespace std;

void insertionSort(int A[], int flag, int n){


   int i,t;

    if(flag == n){
              //  printf("%d\n",n);

        return;
    }

    i = n-1;

    t = A[n];


    while(i>=0 && A[i] > t){

            A[i+1] = A[i];
            i--;
    }

    A[i+1] = t;

    insertionSort(A, flag, n+1);

}


int main()
{

    int number[]={5,4,3,2,1};

    int aSize;
    aSize = sizeof(number) / sizeof(number[0]);

     insertionSort(number, aSize, 1);

     for(int i =0; i<aSize; i++)
            printf("%d ", number[i]);

        return 0;
}