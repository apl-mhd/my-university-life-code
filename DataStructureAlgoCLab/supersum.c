#include <stdio.h>
#include <stdlib.h>


  int  paint(int w, int h, long long m){

    int area, rt, temp = 0,i,j, multi;

        area = w * h;

        if(w > h){
            temp = w;
            w=h;
            h= temp;
        }
        temp = 0;


        if( area == m ){

            rt = area;


        }

        else{
            for(i =1; i<=h; i++){

                for( j =1; j <= w; j++){

                    area = i * j;

                    if( area > m )
                        break;

                    else if(area > temp){

                        temp = area;
                    }

                }

                rt = temp;
            }


        }


    return rt;
  }

int main()

{

    int a, b, c;

    scanf("%d%d%d",&a,&b,&c);
    printf("%d\n",paint(a,b,c));
    return 0;
}