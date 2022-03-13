#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  int number[] = {10,20,30,40,50};
  int number2[] = {1,2,3,4,5};
  int mergeArray[100];
    int i=0,j=0, m,n,k=0;

  m = sizeof(number)/ sizeof(number[0]);
  n = sizeof(number2)/ sizeof(number2[0]);

    while(i < m && j<n ){


        if(number[i] <number2[j])

            mergeArray[k++] = number[i++];
        else
            mergeArray[k++] = number2[j++];


    }



    if(i<m)
        while(i<m)
            mergeArray[k++] = number[i++];
else
while(j<n)
         mergeArray[k++] = number2[j++];

          for(i=0; i<10; i++)
            cout<<mergeArray[i]<<" ";
    return 0;
}