#include<stdio.h>

int main(){


    int number[6] = {6,2,3,5,1,4};

    int i, temp, j, min, minAddress;
    
    

    for(i = 0 ; i < 6; i++){
         min = 2147483647;

        for(j = i; j < 6; j++){

            if(number[j] < min){

                min = number[j];
                minAddress = j;
            }
        }

        temp = number[i];
        number[i] = min;
        number[minAddress] = temp;
    }

    printf(" %d %d %d %d %d\n",  number[0],number[1],number[2],number[3],number[4],number[5]);


    return 0 ;
}