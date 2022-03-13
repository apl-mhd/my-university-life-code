#include<cstdio>
#include<cstring>



int main(){

    char mainString[50] = "hello", temp;

   int stringLength = strlen(mainString),i = 0, j;

   j = stringLength-1;

   while(i < j){

       temp = mainString[i];
       mainString[i] = mainString[j];
       mainString[j] = temp;

       i++;
       j--;


   }

   mainString[stringLength] = '\0';

   printf("%s", mainString);




}