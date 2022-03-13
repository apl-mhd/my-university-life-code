#include <stdio.h>
#include <stdlib.h>


    void countFun(int count){

        if(count > 20){


       return;

    }

    else{

         printf(" %d ", count);

        countFun(count + 1);
    }

    return;

    printf(" 0 ");
   // printf(" %d ", count);

    }

int main()
{

    countFun(1);
    return 0;
}