#include <stdio.h>
#include <stdlib.h>

int rowSum(int array[4][4],int rowNumber){

    int j, sum = 0;


        for(j =0; j<4; j++ ){
               // scanf("%d", &number[rowNumber][i]);

         sum += array[rowNumber][j];
        }



return sum;
}

int main()
{
    int rowNo;

  int number[4][4];
  int i, j;

    for(i =0; i<4; i++){
        for(j =0; j<4; j++ ){
                scanf("%d", &number[i][j]);


        }
    }

    printf("Enter row NO\n");
    scanf("%d", &rowNo);
    printf("row sum = %d\n",rowSum(number,rowNo));


    return 0;
}