#include <stdio.h>
#include <stdlib.h>


//FloydsTringle

int main()
{

    int row, i,j, number = 0;
    scanf("%d",&row);

    for(i = 1; i <= row; i++){

        for( j = 1; j <= i; j++  ){
                number++;
            printf("%d ", number);

        }

        printf("\n");

    }

    return 0;
}