#include<stdio.h>

int main(){


    char name[100]={"tuia  kta"};
    char temp;

    int i = 0,j = 0, len = 0;

      //gets(name);

    while(name[i]){

        i++;


    }

    len =i;



    for( i = 0; i < len; i++ ){

           for(j = 0; j < len-1; j++){



                if(name[j] > name[j+1]){

                   temp = name[j];
                   name[j] = name[j+1];
                   name[j+1] = temp;
               }

           }


    }

    //printf("%c %c %c %c", name[0],name[1],name[2],name[3]);
    printf("%s", name);

//    while(name[i]){ //length

//        printf("%c\n", name[i]);

//        i++;
//    }

//    len = i;



    return 0;
}