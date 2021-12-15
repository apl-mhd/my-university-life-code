#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main()
{

 int x, i,j,n,temp, a[10000];

    clock_t start, stop;

 printf("Enter array size:");

 scanf("%d",&n);

    for(i=0; i<n;i++){


        a[i] = rand() % 100+1;

    }

    start = clock();
     for(i=1; i<n;i++){

        for(j = 0; j<n-i; j++){

            if(a[j+1] < a[j]){

                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }


    }

    stop =  clock();

    double timeCount = stop-start;

     for(i=0; i<n;i++){


        printf(" %d ",a[i]);
    }

    printf("time:%f\n", timeCount);


    return 0;
}