#include <stdio.h>

int arr();

int main(){



    int A[5] = {3, 8, 9, 7, 6};

    int i, j, temp;


    for(i = 0; i < 1; i++ ){

        temp = A[4];

        for( j = 4; j >= 1; j--){

            A [j] = A[j-1];




            //printf(" %d ", j);
        }

        A[0] = temp;

          // printf(" %d %d %d %d %d \n", A[0],A[1],A[2],A[3],A[4]);


    }




    return 0;
}