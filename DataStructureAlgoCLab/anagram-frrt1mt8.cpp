#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int anagram(char str1[50], char str2[50]){

    int i,j,flag=0,size;
    char temp;

    size = strlen(str1);


    if(strlen(str1) != strlen(str2)){

        printf("not anagram\n");
        return 0;
    }

    for(i =0; i<size; i++){
        for(j=0; j<size; j++){


            if(str1[i]<str1[j]){

                temp = str1[i];
                str1[i] = str1[j];
                str1[j]= temp;
            }

            if(str2[i]<str2[j]){

                temp = str2[i];
                str2[i] = str2[j];
                str2[j]= temp;
            }

        }
    }

    for(i =0; i<size; i++){

        if(str1[i] != str2[i]){

            flag=-1;
            printf("not a anagram\n");
           break;

        }
    }

  if(flag ==0)
    printf("anagram\n");

    return 0;

}


int main()
{

   char str1[50];
   char str2[50];

   printf("First string:");
   gets(str1);


   printf("second string:");
   gets(str2);

   anagram(str1, str2);



    return 0;
}