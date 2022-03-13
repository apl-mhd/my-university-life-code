#include <stdio.h>
#include <stdlib.h>

/*
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5

*/

int main()
{

    int row, i,j, number = 0;
    scanf("%d",&row);

    for(i = 1; i<=row; i++){

        for( j = 1; j <= i; j++  ){

            printf("%d ", i);

        }

        printf("\n");

    }

    return 0;
}