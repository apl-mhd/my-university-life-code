#include <stdio.h>
#include <string.h>

    char str[50][50];


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

  // printf("%s", str[0]);
   //printf("%s", str[1]);
  // printf("%s", str[2]);
//    printf("%s\n", str[3]);
//        printf("-------------------------------------------------\n");


   // printf(" %c %c %c %c ", str[0][0], str[0][1], str[0][2], str[0][3]);

}

void longPalindrom(char str[50][50],int totalWord){

   // printf("%s", str[0]);

    int i,flag, j=0, max=0,size, add,m=0;
    int pword[totalWord];


    for(i=0; i< totalWord; i++){

        size = strlen(str[i]) -1;
        j=0;
        flag=0;
        while( j<size){

            if(str[i][j] !=str[i][size]){
                flag =-1;
            }
            j++;
            size--;
        }

        if(flag ==0){

            add = i;

            pword[m] = i;
            m++;


        }

    }

    printf("\n%s\n", str[add]);


   for(i=0; i<totalWord; i++){

       // printf("%d", pword[i]);
   }

}






int main()
{

    char name[100] = "NUR, REHTOM! REDRUM!!";

    printf("enter reverse word\n\n");

   gets(name);

    int totalWord;


   totalWord = wordCount(name); /*count total word in a string*/


   copyString(name, totalWord); /* copy string in a 2d charcter array    'char str[50][50]' */

   longPalindrom(str, totalWord);


    return 0;
}