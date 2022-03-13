#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int last;

int palindrome(char *p, int start, int end){


    if(end == start)
        return;
    if(p[start] != p[end]){


        return -1;
    }

    palindrome(p, start+1, end-1); /*recursively call*/

    return 0;
}


int main()
{

   char name[100];

   char *p;

    int end, start, check;

    printf("Enter Word\n");
    gets(name);
    start =0;
    end = strlen(name)-1; /*string length*/


    p = name; /*assign string to pointer*/

   check = palindrome(p, start, end); /*function call*/

     //printf("%d %d\n",check,end);
        if(check == -1){
            printf(" not palindrom\n");
        }

        else {

            printf("palindrom\n");
        }

    return 0;
}