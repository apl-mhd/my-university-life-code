#include <cstdio>

int solution(int A[], int N);

int main(){

    int a[7] = {9,3,9,3,9,7,9};

    printf("%d\n", solution(a, 7));
   // solution(a, 15);

    return 0;
}

int solution(int A[], int N){

        int i, sum = 0, allSum = 0;

    for(i = 2; i < N; i++){

           // printf(" %d ", i);

            sum = sum + i + (i-2);

            if( N - 2 == i){

                break;
            }

            if( i % 2 == 1 ){


                i += 3;

                sum = sum + i + (i-2);

                //printf(" %d ", i);

            }

    }



    allSum =( (N-1) * N ) / 2;

   // printf("%d %d", sum, allSum);

    return A[allSum - sum];

}