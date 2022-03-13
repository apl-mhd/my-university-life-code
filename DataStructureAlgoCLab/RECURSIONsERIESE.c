#include <stdio.h>
#include <stdlib.h>

void series(int start, int end,int count){
    if(count == 0)
        printf("%d ", start);

    if(count == end -1 )
        return;
    else{


        printf("%d ",start +=3);
    }

    series(start, end, count+1);
}

int main()
{

    int start, term,count=0;

    scanf("%d%d",&start,&term);
    //printf("%d ", start);
    series(start, term,count);

    return 0;
}