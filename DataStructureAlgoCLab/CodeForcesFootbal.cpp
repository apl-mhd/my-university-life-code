#include<stdio.h>
#include <string.h>


int distinctLength(char player[100]){


    int count=0, neighbour=0, i, size ;

    size = strlen(player);


    for(i =0; i<size; i++){


        if(player[i] == player[i+1]){

            count++;

            if(count > 5){

                return count;
            }
        }

        else{


            count =0;
        }



    }

    return count;


}



int main(int argc, char *argv[])
{
char player[100];
int playerSize;
    gets(player);

    playerSize = distinctLength(player);

    if(playerSize > 5){

        printf("YES");

    }

    else{

        printf("NO");


    }

   //printf("%d\n", distinctLength(player));



    return 0;
}