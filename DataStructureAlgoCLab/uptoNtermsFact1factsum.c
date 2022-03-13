#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/*

    12/3! + 23/4! + 34/5! + ........ ...... upto n terms.

*/

int  square(int n){

    int i;
    double sum = 0;

    for(i = 1; i <=n; i++){
         //sum += pow(i, i+2 ) / factFunction(i+2);
         //printf(" %d ^ %d = %lf / %lf =%lf \n",i,i+1, pow(i, i+1 ),factFunction(i+2), pow(i, i+1 ) / factFunction(i+2));
        //printf(" %d ^ %d = %lf / %d = %lf \n",i, i+1, pow(i, i+1 ), factFunction(i+2), pow(i, i+1 ) / factFunction(i+2) );

        sum += pow(i, i+1 ) / factFunction(i+2);

         }

         printf("%lf", sum);


        //printf(" %d ^ %d =  %.lf\n",i, i+1, pow(i, i+1));





return sum;
}

int factFunction(int fact){

    int i;
    double value =1;

    for( i = 1; i<=fact; i++){

        value = value * i;
    }

   // printf("%lf\n", value);




return value;
}

int main()
{

       // printf("%d\n", square(3));
         square(3);

       //  printf("%d", factFunction(1+4));

    return 0;
}