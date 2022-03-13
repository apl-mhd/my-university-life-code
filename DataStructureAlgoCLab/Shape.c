#include <stdio.h>
#include <stdlib.h>

/*
    5 5 5 5 5
    4 4 4 4
    3 3 3
    2 2
    1

*/

int main()
{

    int row, i,j, number = 0;
    scanf("%d",&row);

    for(i = row; i >= 1; i--){

        for( j = 1; j <= i; j++  ){

            printf("%d ", i);

        }

        printf("\n");

    }

    return 0;
}