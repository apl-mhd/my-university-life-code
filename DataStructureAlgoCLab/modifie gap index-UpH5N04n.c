#include<stdio.h>

int solution(int N);


int main(){


    printf(" %d ", solution(10));



    return 0;
}


int solution(int N){





    int number =74901729, count = 0, i, j, temp, gapIndex = 0, gapCount = 0;

   int  binaryConvertArray[100], binaryGap[100];

   /*decimal to binary convert section*/

    while(number !=0 ){

        binaryConvertArray[count] = number % 2;

        number /=2;
        count++;


    }


    /* binary array reverse section*/

    j = count -1, i = 0;

    while(i < j){

        temp = binaryConvertArray[i];

        binaryConvertArray[i] = binaryConvertArray[j];
        binaryConvertArray[j] = temp;
        i++;
        j--;


    }


    for(i = 0; i < count; i++){  /*print binary to decimal number */

     printf(" %d ", binaryConvertArray[i]);

    }

    printf("\n");


    /*searching gap index*/

    for(i = 1; i < count; i++){

        if(binaryConvertArray[i] == 0){

             gapCount++;


        }

        if(binaryConvertArray[i] == 1){

           // printf("gapcount =  %d \n", gapCount);

            binaryGap[gapIndex] = gapCount;
            gapCount = 0;
            gapIndex++;

        }

    }

    printf("again bggap  %d %d\n", gapIndex, binaryGap[0]);


    for(i = 0; i < gapIndex; i++){  /*print binary to decimal number */

     printf("binary gap %d \n", binaryGap[i]);

    }

    printf("gapindex %d \n", gapIndex);


    /*bouble sort find largest binary gap lol, eto pera kena???*/
    temp = 0;

    for(i = 0; i < gapIndex; i++){

        for(j = 0; j < gapIndex - 1; j++){

            if( binaryGap[j] < binaryGap[j+1]){

                temp = binaryGap[j];

               binaryGap[j] = binaryGap[j+1];

               binaryGap[j+1] = temp;
            }

        }
    }

    printf("\nhigest to low gap\n");

    for(i = 0; i< gapIndex; i++){

        printf(" %d ", binaryGap[i]);

    }
    printf("\n");


    printf("bgapindex %d %d\n", binaryGap[0], gapIndex);

    if(gapIndex == 0 || gapIndex == 0 && binaryGap[0] == 1 ){

        printf("haha");
        return 0;
    }

    else{

        printf("Alhamdu-lillha");
       return binaryGap[0];

    }








}