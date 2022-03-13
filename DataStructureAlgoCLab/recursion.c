#include <stdio.h>
#include <stdlib.h>
/*
sum(5) = 5 + sum(4)
sum(4) = 4 + sum(3)
sum(3) = 3 + sum(2)
sum(2) = 2 + sum(1)
sum(5) = 5 + sum(3)


*/

void display(){

    printf("\namar sonar  bangla");
}

void sum(int n){

    int i;

    if(n==0)
        return;

    for(i=0; i<3; i++){
        printf(" %d ",n);
        sum(n-1);
    }

}


int main()
{
    sum(2);
    return 0;
}