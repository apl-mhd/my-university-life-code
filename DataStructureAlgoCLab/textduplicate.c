#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name[100] = {"orko"};

   int duplicate[100];

   int i, asci;

  // printf("test");


   for(i = 0; i<=255; i++){

        duplicate[i] = 0;



   }

    for(i = 65; i<=122; i++){

            asci = name[i];
            duplicate[asci] = 1;

   }

      for(i =65; i<=122; i++){

       if(duplicate[i] == 1){

            printf("%c", duplicate[i]);
       }

   }




    return 0;
}