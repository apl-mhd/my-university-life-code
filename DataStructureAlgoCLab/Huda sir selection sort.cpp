#include <iostream>
#include <cstdio>
using namespace std;


int main()
{

    int number[]={5,4,3,2,1};
    int i, j,k,t,temp,n;

        n=5;
    for(j = n-1; j>0; j--){

        t=0;

        for(k=1; k<=j; k++){

            if(number[k] > number[t])
                t =k;
        }

        temp = number[t];
        number[t] = number[j];
        number[j] = temp;




    }


    for(i=0; i<5; i++)
            cout<<number[i]<<"  "<<endl;

        return 0;
}