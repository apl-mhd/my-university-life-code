#include <stdio.h>
#include <stdlib.h>
 int m[20];
int fibo(int n){

    if( n == 0 || n == 1)
        return 1;

  return m[n] = fibo(n-1)+ fibo(n-2);


}


int main()
{
    int n,i;

    scanf("%d",&n);
    fibo(n);

        printf(" %d %d %d", 0,1,1);

    for(i=2;i<n-1;i++){

    printf(" %d ", m[i]);


    }
    return 0;
}