#include <QCoreApplication>
#include <cstdio>

int main(int argc, char *argv[])
{

    int i=0,j=0,k=0;
    int number1[4] = {2,7,9,10};
    int number2[4] = {1,3,5,6};
    int margeAray[8];

    while(i<4 && j<4){

        if(number1[i]<number2[j]){


            margeAray[k] = number1[i];
            i++;
         //    printf(" %d ",  margeAray[k]);
        }


        else{

            margeAray[k] = number2[j];
            j++;

           //  printf(" %d ",  margeAray[k]);
        }

        k++;

    }

//    for(i=0; i<8; i++){

//        //printf(" %d ", margeAray[i]);

//    }


    while(i<4){

        margeAray[k] = number1[i];
        i++;
        k++;
    }


    while(j<4){

        margeAray[k] = number2[j];
        j++;
        k++;
    }

    for(i=0; i<8; i++){

        printf(" %d ", margeAray[i]);

    }

    return 0;
}