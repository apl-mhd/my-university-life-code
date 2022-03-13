
#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{

    int i = 0, j;
    char str[50], temp;

    gets(str);

    j = strlen(str) - 1;

    printf("%d ", j);

    while( i < j ){

        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf(" %s ", str);

    return 0;
}