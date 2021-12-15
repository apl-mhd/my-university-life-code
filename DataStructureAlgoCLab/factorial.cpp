#include <stdio.h>
#include <stdlib.h>


// factorial

int fact(int n){
  double factValue = 1;

    int i;

    for(i =1; i<=n; i++){

        factValue = factValue * i;
    }


return factValue;
}

int main()
{

    int n;
    scanf("%d",&n);

    printf("%d\n", fact(n));

    return 0;
}