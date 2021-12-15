#include <QCoreApplication>
#include <cstdio>
#include <vector>

using namespace std;



 //int number[100];
 vector <int> dp (100,-1);




int fibo(int n){

    dp[0]= dp[1]=1;

    if( n == 0 || n == 1 )

            return 1;

        if(dp[n] != -1)
            printf(" %d ", dp[n]);
            return dp[n];


    return dp[n] =  fibo(n-1) + fibo(n-2);

}



int main(int argc, char *argv[])
{


 //printf(" %d ", numbers2[4]);



    int n;

        fibo(5);
        for(n = 0; n< 5; n++){

            printf(" %d \n", dp[n]);
        }


    return 0;
}