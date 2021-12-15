#include <stdio.h>
#include <stdlib.h>
int swap(int *a, int *b){

    int temp;

        temp = *a;

        *a = *b;
        *b = temp;

      printf(" user Fun: a = %d b = %d\n", *a, *b);

      //  *a=10;
      //  *b=20;


}

int main()
{
    int a=100, b=200;
    swap(&a, &b);

    printf("main: a = %d b = %d\n",a,b);
    return 0;
}