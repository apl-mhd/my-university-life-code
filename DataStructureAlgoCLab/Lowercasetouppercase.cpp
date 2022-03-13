#include<cstdio>
#include<string.h>
#include<ctype.h>

void loWerToUpperViceVersa(char name[]){

        int i = 0;

        while(name[i]){

          if(name[i]  >=65 && name[i] <=90 ){

              name[i] = name[i] + 32;

          }

          else  if(name[i]  >=97 && name[i] <=122 ){

              name[i] = name[i] - 32;

          }

          printf("%c", name[i]);

          i++;

        }

        printf("\n");




 return void();
}


int main(){



    char name[100] = "Amar SOnArBangLa Amit";
    char name2[100] = "tui muri kha";

    loWerToUpperViceVersa(name);
    loWerToUpperViceVersa(name2);








    return 0;
}