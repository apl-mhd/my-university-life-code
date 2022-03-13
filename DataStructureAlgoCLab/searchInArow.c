#include <stdio.h>
#include <stdlib.h>

void searchFun(int array[2][2],int search){

    int i, j, flag = -1, row, col;


        for(i =0; i<2; i++){
            for(j =0; j<2; j++ ){

                if(search == array[i][j]){
                    //printf("present");
                    flag = 0;

                   row = i;
                   col = j;
                }

        }
    }

    if(flag != 0)
        printf("not present");
    else

            printf(" present\n array address=[%d][%d]", row, col);


return;
}

int main()
{
    int search;

  int number[2][2];
  int i, j;

    for(i =0; i<2; i++){
        for(j =0; j<2; j++ ){
                scanf("%d", &number[i][j]);


        }
    }

    printf("Find out:\n");
    scanf("%d", &search);
  searchFun(number,search);


    return 0;
}