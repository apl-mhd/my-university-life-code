/*
 * main.cpp
 *
 * Copyright 2016 Antimatter <antimatter@antimatter-H81M-S2PV>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */

void housePaint(int testCase){





    int i,j,n, min=1000, minfirst=1000, adrs, sum=0;
    int  house[20][3];

   // int  house[20][3] = { {13,23,12},{77,36,64},{44,89,76},{31,78,45} };

for(n=0; n<testCase; n++){

        for(i = 0; i<4; i++){

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
                 min = 1000;
                 minfirst=0;

            }


    printf("Case %d: %d\n", n+1, sum);

}

}

#include <stdio.h>

int main(int argc, char **argv)
{

    int testCase;
    scanf("%d",&testCase);
    housePaint(testCase);

    return 0;
}