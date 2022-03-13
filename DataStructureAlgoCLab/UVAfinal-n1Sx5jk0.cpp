#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main(int argc, char **argv)
{

   int phone[10000];
    int i, number,start,count=0,tCase=1,n;

    while(scanf("%d",&n)==1,n){

        for(i=0;i<n;i++)
            scanf("%d",&phone[i]);

        printf("Case: %d\n",tCase++);

        for(i = 0; i<n; i++){
            if(phone[i+1] - phone[i] == 1){


                count++;
            }


            else if(count > 0) {

                start = i - count;
                printf("0%d-%d\n",phone[start],phone[start] + count);


                count = 0;

                }

            else{

                    printf("0%d\n",phone[i]);

                }


            }



}
    return 0;
}