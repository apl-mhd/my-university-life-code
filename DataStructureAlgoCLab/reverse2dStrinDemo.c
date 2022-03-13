#include <stdio.h>
#include <string.h>

    char str[50][50];

int wordCount(char name[50]){  /* count total word in a string*/

    int totalWord = 1, i=1;


    while(name[i] != '\0'){

        if( name[i] == ' '){

            totalWord++;
        }

        i++;
    }


    return totalWord;

}



void copyString(char name[50], int size, int totalWord){ /* copy string in 2d char array reverse*/

    int i, j=0, temp, m=0;

    for(i = 0; i < totalWord; i++){
            m = 0;
        while(name[j] != '\0'){

                str[i][m] =name[j];
                printf(" %d \n", j);
                j++;
                m++;

                if(name[j-1] == ' ')
                    break;
        }


    }

    printf("%s", str[0]);
    printf("%s", str[1]);
    printf("%s", str[2]);
    printf("%s\n", str[3]);
        printf("-------------------------------------------------\n");


   // printf(" %c %c %c %c ", str[0][0], str[0][1], str[0][2], str[0][3]);

}


/*********************** reverse *****************************************/

void  stringReverse(char twodString[50][50], int totalWord){

    int i , j, m, n ;
    char temp;



    for(i = 0; i < totalWord; i++){

       n = strlen(twodString[i]) -1;
       m = 0;

        while(m < n){

           temp = twodString[i][m];
           twodString[i][m] = twodString[i][n];
           twodString[i][n] = temp;

            m++;
            n--;
           }

        }


    printf("%s", str[0]);
    printf("%s", str[1]);
    printf("%s", str[2]);
    printf("%s\n", str[3]);
    printf("-------------------------------------------------\n");


}







int main(int argc, char *argv[])
{




    char name[80] = "NUR, REHTOM! REDRUM!!";

    int stringLength, totalWord;

    stringLength = strlen(name);

   totalWord = wordCount(name);

   printf("total %d \n", totalWord);

   copyString(name, stringLength, totalWord);

   stringReverse(str, totalWord);


    return 0;
}