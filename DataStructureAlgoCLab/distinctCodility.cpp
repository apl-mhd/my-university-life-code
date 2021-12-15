#include<cstdio>
#include<vector>
#include <algorithm>

using namespace std;

int solution(vector<int> &A){

    int i, count = 0, N;
    std::sort(A.begin(), A.end());

   // N = A.size();

    for( i = 0; i < A.size()-1; i++ ){


        if(A[i] - A[i + 1] != 0 ){

            count++;
        }


    }

   return count;

}



int main(){

    vector <int> number{2,1,1,2,3,5};
    vector <int> number2{0};
    vector <int> number3{1, 1, 14, 1000, 1};


    printf(" %d \n", solution(number) == 3);
    printf(" %d \n", solution(number2) == 1);
    printf(" %d \n", solution(number3) == 3);






    return 0;

}