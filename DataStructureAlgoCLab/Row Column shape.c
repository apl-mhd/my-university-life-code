#include <stdio.h>
#include <stdlib.h>

/*
   ****
   ****
   ****

*/

int main()
{

    int row, col, i,j, number = 0;
    scanf("%d%d",&row,&col);

    for(i = 1; i<=row; i++){

        for( j = 1; j <= col; j++  ){

            printf("*");

        }

        printf("\n");

    }

    return 0;
}