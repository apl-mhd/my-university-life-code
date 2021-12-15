#include <cstdio>


int solution(int X, int Y, int D);

int main(){

printf("%d ", solution(10, 85, 30));

    return 0;
}




int solution(int X, int Y, int D){

    int  count = 0;

    while(1){


        if(X >= Y){


            break;

        }

        X += D;

        count++;

    }

return count;



}