#include <iostream>
#include <cstdio>
using namespace std;

void  sortArray(int number[], int n){   /*sorting element*/

        int i, j, temp;
        for(i=0;  i<n-1;  i++){

                for(j=0;  j<n-i-1;  j++){

                    if(number[j] > number[j+1]){

                         temp  =    number[j]  ;
                            number[j] = number[j+1];
                            number[j+1] = temp;
                    }
    }
        }

}


 int  bSearch(int number[], int  n, int item){ /*searching element*/

            int low =0, high = n-1,mid;


            while(low <=high ){

                    mid = (low + high) / 2;

                    if(number[mid] ==  item){

                     //   printf("found");

                        return 1;
                      //  break;
                    }

                    else if( number[mid] > item){

                                high = mid-1;
                    }

                    else {

                            low = mid+1;
                    }


            }

        return 0;
 }



int main()
{
    int number[10], n, i, flag, item;

    printf("array size:");
    cin>>n;


    printf("Enter element:");

    for(i=0; i<n; i++)

        scanf("%d",&number[i]);

    sortArray(number, n);  /*sorting function call*/

    printf("search item:");

    scanf("%d",&item);

       flag= bSearch(number, n, item);  /*search function call*/

        if(flag == 1)

            printf("Found");

        else

            printf(" not Found");

/*
      for(i=0; i<n; i++){

            printf(" %d ", number[i]);


    } */

    return 0;
}