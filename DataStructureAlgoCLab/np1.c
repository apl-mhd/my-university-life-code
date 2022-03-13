#include<stdio.h>

int cycleLength(int n){

    int i = 0;

    while(1){

           // printf(" %d ", n);

        i++;

        if( n == 1)
            break;

        if( n % 2 == 1)
            n = (n *3) +1;
        

        else

            n /=2;
    }



return i;
}


int maxCycleLength(int a, int b){

        int i, max = 0;

   for(i = a; i <= b; i++){

        if( max < cycleLength(i))
            max = cycleLength(i);

       // return max;
   }

   return max;

}

int main()
{

    int a, b, temp;
   /* scanf("%d%d",&a, &b);
    if(a > b){
        temp =  a;
        a = b;
        b = temp;

    }*/

    printf("%d\n", maxCycleLength(1, 10));
    printf("%d\n", maxCycleLength(201, 210));
    printf("%d\n", maxCycleLength(900, 1000));



   return 0;
}