#include<stdio.h>

int main(){

    int number[3][3] = {1, 2, 3,
                        4, 5, 6,
                        7, 8, 9

                       };

    int i, j;



    for(i = 0; i < 3; i++){


        for(j = 0; j < 3; j++){

            if(i == 1 || j == 1 ){


                continue;
            }

            printf("%d ", number[i][j]);

        }


        printf("\n ");



    }


    return 0;
}