#include <QCoreApplication>

#include <string.h>


struct info{

    char userName[100];
    int id;



};



void stringCheck(char  nameScan[10], struct info array[100]){

     int size,i,n,j, flag = 0, index, loopBreak=2;

     size = ( strlen(array[0].userName)> strlen(nameScan) ) ? strlen(array[0].userName):  strlen(nameScan);

     printf("%d\n",size);

     for(i=0;i<2;i++){

         flag = 0;


     for(j = 0; j<size; j++){

         if(nameScan[j] != array[i].userName[j])
             flag = -1;

     }

     if(flag == 0){

         index = i;
        i=2;

     }

     }

     printf("%d %d\n",flag, index);

}


int main(int argc, char *argv[])
{


    struct info name;
    struct info name2;


     struct info array[100] = {{"orko",10},

                                {"ripon",100}};

    int index;

   // printf(" %s ", array[1].userName);


    char nameScan[10];

    gets(nameScan);

    stringCheck(nameScan, array);

    //printf("aa%d\n",index);



    return 0 ;
}