#include<cstdio>


int solution(int A, int B, int K){

    int totalDivNumber;

        if( A == 0)
            totalDivNumber= B / K;

        else

          totalDivNumber = (B / K) - ( (A-1) / K);


    return totalDivNumber;

}


int main(){


   printf(" %d \n ", solution(6, 11, 2) == 3);
   printf(" %d \n ", solution(6, 15,2) == 5);
   printf(" %d \n ", solution(0, 5, 1) == 5 );
   printf(" %d \n ", solution(0, 0, 1) == 0 );
   printf(" %d \n ", solution(0, 1, 1) == 1 );
   printf(" %d \n ", solution(1, 1, 1) == 1 );
   printf(" %d \n ", solution(0, 0, 11) == 1 );

   printf(" %d ", 0 /11 );







   return 0;
}