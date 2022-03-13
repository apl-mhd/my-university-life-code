#include<cstdio>


int solution(int A[], int N);

int main(){

    int number [] = {1,2,5,3};

    solution(number, 4);



return 0;
}


int solution(int A[], int N){


    int i, j, temp;

    for(i = 0; i < N; i++){

        for( j = 0; j < N-1; j++){

            if(A[j] < A[j+1]){

                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }


        }
    }


    for(i = 0; i < N; i++){




            printf("A[%d] = %d\n", i, A[i]);



        }

    for(i = 0; i < N-1; i++){

        if(A[i] - A[i+1] == 2 ){


            printf("%d\n", A[i]-1);

            break;

        }

        // printf("%d\n", A[i]);

    }





return 0;
}