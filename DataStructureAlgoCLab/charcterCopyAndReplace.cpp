#include <stdio.h>
#include <stdlib.h>

void findAndReplace(char str2[30],char ch){
    int n;


    for(n =0; str2[n] != '\0';  n++ ){


        if(str2[n] == ch ){

            str2[n] = '#';

        }
    }

    printf("your replace string = %s \n", str2);



}

int main()
{
   printf("enter your string");

   char name[30], ch;
    printf("enter string\n");

    gets(name);

    printf("enter charter\n");
    scanf("%c", &ch);

    findAndReplace(name, ch);
    return 0;
}