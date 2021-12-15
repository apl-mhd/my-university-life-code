
#include <string.h>
#include <stdio.h>




int main(int argc, char *argv[])
{


    char word[200];
    int size,i, length;

    scanf("%d",&length);

    for(i=0; i<length;i++){

        scanf("%s",&word);



    size = strlen(word);

    if(size >10)

        printf("%c%d%c\n",word[0],size-2, word[size-1]);
    else
        printf("%s\n",word);
}

    return 0 ;
}