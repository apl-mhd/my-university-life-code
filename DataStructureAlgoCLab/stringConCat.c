#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void a(char str2[30],char str1[30],int n){

    int size,i;

    size = strlen(str2);
    //printf("%d", size);

    for( i =0; i<n; i++ ){

        str2[size] = str1[i];

        size++;

    }
    str2[size] = '\0';

    printf(" %s \n %s \n", str2, str1);




}

int main()
{
    char name1[30],name2[30];
    int n;

    printf("Enter first string:");
        gets(name1);
    printf("Enter second string:");
        gets(name2);
    printf("Enter copy size:");
        scanf("%d",&n);

       // printf("%s %s %d", name1, name2, n);

    a(name2, name1, n);

    return 0;
}