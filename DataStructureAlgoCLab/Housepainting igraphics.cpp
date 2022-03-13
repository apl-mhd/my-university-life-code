/*
 * main.cpp
 *
 * Copyright 2016 Apel Mahmud <antimatter@antimatter-H81M-S2PV>
 *
 *
 */

#include <stdio.h>

int housePaint(int totalHouse){





    int i,j,n, min=1001, minfirst=1001, adrs, sum=0;
    int  house[20][3];

   // int  house[20][3] = { {13,23,12},{77,36,64},{44,89,76},{31,78,45} };



        for(i = 0; i<totalHouse; i++){

            for(j =0; j<3; j++){

                    scanf("%d", &house[i][j]);

                    if(i == 0 && house[i][j] < minfirst){

                        minfirst = house[i][j];
                        adrs = j;
                       //printf("%d\n", minfirst);

                    }



                    //sum +=minfirst;
                   // minfirst=0;

                     if( i >0 && j!=adrs && house[i][j] < min){


                            min = house[i][j];
                            adrs=j;

                           // printf("%d\n", min);

                    }



                }

                if(i>0){
                   sum += min;
                }
                 //printf("min first =%d\n", minfirst);
                 sum += minfirst;
                 min = 1001;
                 minfirst=0;

            }


   // printf("Case %d: %d\n", n+1, sum);

        return sum;



}


int main(int argc, char **argv)
{

    int testCase, n, totalHouse, result[100];
     scanf("%d",&testCase);


    for( n =0; n<testCase; n++){

        scanf("%d",&totalHouse);

        result[n] = housePaint(totalHouse);

        //printf("Case %d: %d",testCase+1, housePaint(totalHouse));

    }

    for( n =0; n<testCase; n++){





        printf("Case %d: %d\n",n+1,  result[n]);

    }



    return 0;
}