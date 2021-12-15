#include<stdio.h>

int binarySearch(int number[], int lenght, int search){

    int begin = 0, mid,  end;

    end = lenght - 1;

    while(number[mid] != search){

        mid = (begin + end) / 2;

        if( search < number[mid])

            end = mid-1;

        if(search > number[mid])

            begin = mid + 1;

    }

 return mid;
}


int main(){

int number[10]  = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//printf("%d\n", binarySearch(number, 10, 1));
//printf("%d\n", binarySearch(number, 10, 2));
//printf("%d\n", binarySearch(number, 10, 3));
//printf("%d\n", binarySearch(number, 10, 4));
//printf("%d\n", binarySearch(number, 10, 5));
//printf("%d\n", binarySearch(number, 10, 6));
printf("%d\n", binarySearch(number, 10, 7));
//printf("%d\n", binarySearch(number, 10, 8));
//printf("%d\n", binarySearch(number, 10, 9));
//printf("%d\n", binarySearch(number, 10, 10));


   return 0;

}