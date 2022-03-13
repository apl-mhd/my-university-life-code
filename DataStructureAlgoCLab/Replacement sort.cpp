#include <iostream>
#include <cstdio>


using namespace std;

int main()
{

   int number[100];
   int i,j, n, temp;

   scanf("%d",&n);

   for(i=0;i<n;i++)

    scanf("%d",&number[i]);


    for(i=0;i<n-1;i++){

        for(j= i+1; j<n; j++){

            if(number[i] > number[j]){

                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }

    }

    for(i=0;i<n;i++){

    printf(" %d ",number[i]);

    }





    return 0;
}