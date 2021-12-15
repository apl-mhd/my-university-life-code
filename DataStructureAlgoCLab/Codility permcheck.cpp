#include<cstdio>

int solution(int A[], int N);

int main(){

    int number[4] = {4, 1, 3, 2};
    int number2[3] = {4, 1, 3};
    int number3[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};

    printf("%d\n", solution(number, 4));
    printf("%d\n", solution(number2, 3));
     printf("%d\n", solution(number3, 10));




    return 0 ;
}

int solution(int A[], int N){



    int i, max = 0, sum = 0, oneToMaxSum;

    for(i = 0; i < N; i++ ){

         sum +=A[i];

        if(max < A[i]){

            max= A[i];


        }
    }
   // printf(" %d \n", sum);

    oneToMaxSum = max * (max +1) / 2;

    if(oneToMaxSum - sum == 0){

        return 1;
    }

    else{

        return 0;
    }


}