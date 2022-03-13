#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    int i;
    int plusminus;
    int countplus = 0;
    int countminus = 0;
    scanf("%d", &n);

    for(i = 0; i <n; i++){
        scanf("%d", &plusminus);

        if(plusminus > 0){
            countplus++;
        }

       else{
            countminus++;
        }

    }

    printf("%d %d", countplus, countminus);

    return 0;

}