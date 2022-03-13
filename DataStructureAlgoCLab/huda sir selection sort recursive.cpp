#include <iostream>
#include <cstdio>
using namespace std;

void selectionSort(int A[], int aSize){
    int t=0, temp;
        if(aSize == 0)
            return;

        for(int k=1; k<=aSize; k++){
            if(A[k] > A[t] )
                t=k;
        }

        temp = A[t];
        A[t] = A[aSize];
        A[aSize] = temp;

    selectionSort(A, aSize-1);


}


int main()
{

    int number[]={5,4,3,2,1};


    int aSize = sizeof(number) / sizeof(number[0]);
        selectionSort(number, aSize-1);
      for(int i =0; i<aSize; i++){
         printf("%d ", number[i]);
        }



        return 0;
}