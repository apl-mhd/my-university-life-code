#include<cstdio>


int solution(int A[], int N){

    int i;

    for( i = 0; i < N; i++){

//        if(A[i] == 0)


    }



}


int main(){


    int number[6] = {1,2,3,4,5,6};
//    int PrefixSum[5] = {0,0,0,0,0};
   // int PrefixSum[5] = {0,0,0,0,0};
    int prefixSum[6];


    int i, sum = 0;

    for(i = 0; i < 6; i++){

        prefixSum[i]= number[i] + prefixSum[i-1];
        printf(" prefixSum[%d] = %d \n",i, prefixSum[i]);
    }

//    sum = number[0] + number[0-1];
   // printf(" %d \n", PrefixSum[0-1]);



   return 0;
}