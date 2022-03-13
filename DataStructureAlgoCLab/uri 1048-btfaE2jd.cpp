#include<cstdio>

int main(){

    int i,j, temp, a = 0, b;

    int numberOrginal[10] = {1,2,3,4,5,6,7,8,9,10};
    int numberCopy[10];

    for(i = 0; i < 10; i++){

        numberCopy[i] = numberOrginal[i];

     // printf(" %d ", numberOrginal[i]);

     }
   for(i = 0; i < 10; i++){

       for(j = 0; j < 9 - i; j++){

           if(numberCopy[j] < numberCopy[j+1]){

               temp = numberCopy[j];

               numberCopy[j] = numberCopy[j+1];
               numberCopy[j+1] = temp;

           }


    }

   }




      for(i = 0; i < 10; i++){

          if(numberCopy[0] == numberOrginal[i] ){

               printf(" adress %d\n", i+1);
               break;
          }




       }

      printf(" \n ");


      for(i = 0; i < 10; i++){


        printf(" %d ", numberCopy[i]);


       }


        printf(" \n ");


   return 0;
}