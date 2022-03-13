#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name[100] = {"orko"};

   int duplicate[128];

   int i, ascii;

  // printf("test");


   for(i = 0; i<= 122; i++){

        duplicate[i] = 0;



   }



    for(i = 0; name[i] != 0; i++){

            ascii = name[i];
            //printf(" %d ", ascii);
            duplicate[ascii] = 1;

   }

      for(i = 65; i<=122; i++){

       if(duplicate[i] == 1){

            printf(" %c ", i);
       }


   }




    return 0;
}