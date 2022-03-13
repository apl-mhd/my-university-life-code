#include <stdio.h>
#include <stdlib.h>

void maxRowSum(int array[3][3]){

    int i, j, max = 0, sum=0, address;


        for(i =0; i<3; i++){
            for(j =0; j<3; j++ ){

                sum += array[i][j];
                if(max < sum){
                    max = sum;
                    address = i;
                }
        }
         sum = 0;
    }

    //return max;
    printf("maxsum = %d\nMax row = %d\n", max, address );



return;
}

int main()
{
    int rowNo;

  int number[3][3];
  int i, j;

    for(i =0; i<3; i++){
        for(j =0; j<3; j++ ){
                scanf("%d", &number[i][j]);


        }
    }

 maxRowSum(number);


    return 0;
}