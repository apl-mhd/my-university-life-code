#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>

using namespace std;

int main()
{

    int coin[9] = {1, 2, 5,10, 20, 50, 100, 500, 1000};

    int tk, sum=0, i = 8;


    cin>>tk;

    while( i != -1){

        if(coin[i] <=tk){

            sum = sum + coin[i];
            printf("%d + ", coin[i]);
            tk = tk - coin[i];


        }

        else

            i--;
    }

    printf("= %d\n", sum);

    return 0;
}