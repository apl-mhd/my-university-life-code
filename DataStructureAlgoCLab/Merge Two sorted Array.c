#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[4]={1,2,4,10}, b[4]={5,6,15,20}, merge[8], m,n,i,j,k;

    i=0;
    j=0;
    k=0;
    m=4;
    n=4;



    while(i<m && j<n){

        if(a[i] < b[j]){

            merge[k++] = a[i++];

            //k++;
            //i++;
        }

        else{

            merge[k++] = b[j++];
            //k++;
            //j++;
        }

    }

    while(i<m){

        merge[k++]=a[i++];
        //i++;
        //k++;
    }

    while(j<n){

        merge[k++]=b[j++];
       // j++;
        //k++;
    }

    for(i=0; i<8; i++){

        printf(" %d ", merge[i]);
    }


    return 0;
}