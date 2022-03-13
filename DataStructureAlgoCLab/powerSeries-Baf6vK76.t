#include<stdio.h>
#include<math.h>


int fact(int n){

    int i;

    double factSum = 1.0;

    for(i=1; i<=n; i++)
        factSum *= i;
return factSum;
}


int powSeriese(int n){

    int i;
    double sum = 0.00;

    for(i =1; i<=n; i++){

        sum += pow(i, i+1) / fact(i+2);

    }


printf("sum = %lf\n", sum);
return sum;
}



int main(){


    powSeriese(3);

    return 0;
}