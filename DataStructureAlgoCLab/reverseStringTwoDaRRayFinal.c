#include <stdio.h>
#include <string.h>

    char str[50][50];

/***************** count total word in a string******************/

int wordCount(char name[100]){

    int totalWord = 1, i=1;


    while(name[i] != '\0'){

        if( name[i] == ' '){

            totalWord++;
        }

        i++;
    }


    return totalWord;

}



/**************** copy string in 2d char array reverse******************/


void copyString(char name[100],  int totalWord){
    int i, j=0,  m=0;

    for(i = 0; i < totalWord; i++){


            m = 0;
        while(name[j] != '\0'){

                str[i][m] =name[j];

                j++;
                m++;

                if(name[j-1] == ' ')
                    break;
        }


    }

//    printf("%s", str[0]);
//    printf("%s", str[1]);
//    printf("%s", str[2]);
//    printf("%s\n", str[3]);
//        printf("-------------------------------------------------\n");


   // printf(" %c %c %c %c ", str[0][0], str[0][1], str[0][2], str[0][3]);

}


/********************** count only charcter in a string **************************/
int charcterCount(int i){

        int totalCharcter = 0, j = 0;

        while(str[i][j] != '\0'){

            if(str[i][j] >= 'A' && str[i][j] <= 'Z' || str[i][j] >= 'a' && str[i][j] <= 'z' ){

                totalCharcter++;
            }

            j++;
        }

        //printf("count %s \n", str[i]);

       // printf(" %d = %d \n", i, totalCharcter-1 );

        return totalCharcter-1;
}



/*********************** reverse *****************************************/

void  stringReverse(char twodString[50][50], int totalWord){

    int i , j, m, n ;
    char temp;

    for(i = 0; i < totalWord; i++){

     n = charcterCount(i);

      // n = strlen(twodString[i]) -1;
       m = 0;

        while(m < n){

           temp = twodString[i][m];
           twodString[i][m] = twodString[i][n];
           twodString[i][n] = temp;

            m++;
            n--;
           }


                 printf("%s", str[i]);
        }




    printf("\n\n");


}



int main(int argc, char *argv[])
{

    char name[100] = "NUR, REHTOM! REDRUM!!";

    printf("enter reverse word\n\n");

  //  gets(name);

    int totalWord;


   totalWord = wordCount(name); /*count total word in a string*/


   copyString(name, totalWord); /* copy string in a 2d charcter array    'char str[50][50]' */

   stringReverse(str, totalWord); /* finaly reverse string */

    return 0;
}