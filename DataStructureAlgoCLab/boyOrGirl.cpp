#include <string.h>
#include <stdio.h>



void boyOrGirl(char name[100]){

    int i,j,size, distincitLength =0,count;
    size = strlen(name);

    char nameCopy[size];

    strcpy(nameCopy, name);

  //  printf("%s", nameCopy);


    for(i = 0; i<size; i++){

        count =0;

        for(j=0; j<size; j++){

            if(nameCopy[i] == name[j]){

                count++;
                name[j] = '0';

                //printf("%c\n",name[j]);
            }

        }


        if(count>1){

            distincitLength += count-1;
        }
    }


    //printf("%d\n", distincitLength);
    if((size - distincitLength) % 2 ==0){


        printf("CHAT WITH HER!");
    }

    else{

        printf("IGNORE HIM!");


    }

}


int main(int argc, char *argv[])
{
   char name[100];

   gets(name);

   boyOrGirl(name);


    return 0;
}