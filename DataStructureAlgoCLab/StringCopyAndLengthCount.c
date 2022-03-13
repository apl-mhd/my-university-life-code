#include <stdio.h>
#include <stdlib.h>

int main()
{

    char name[100] = "orko";
    char namecopy[100];

    gets(name);

    int i;


    for( i = 0; name[i]; i++)

        namecopy[i] = name[i];
        //printf("%c",name[i]);

        namecopy[i] =0;

        printf("%s\n string length =%d\n", namecopy, i);


    printf("\n");


    return 0;
}