#include<cstdio>


int solution(int A[], int N){

    int i,count = 0, sum = 0;
    
    for( i = 0; i < N; i++){

        if(A[i] == 0){

            count++;

        }



              sum = sum + ( count * A[i]);



    }

    if( sum >  1000000000)

        return -1;
    else
        return sum;


}


int main(){


    int carPair[5] = {0,1,0,1,1};
    int carPair2[8] = {0,1,0,1,1,0,1,1};
    int carPair3[1] = {0};
    int carPair4[1] = {1};




   printf(" %d \n ", solution(carPair, 5) == 5);
   printf(" %d \n ", solution(carPair2, 8) == 11);
   printf(" %d \n ", solution(carPair3, 1) == 0);
   printf(" %d \n ", solution(carPair4, 1) == 0);




    



   return 0;
}