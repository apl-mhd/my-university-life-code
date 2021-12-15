// A Dynamic Programming based solution for 0-1 Knapsack problem
#include<stdio.h>
#include <iostream>
#include <algorithm>
#include <limits>

using namespace std;


void knapSack(int val[], int wt[], int n, int W){
	
		
		int dp[5][8]={0};
		
		
		
		for(int i=1; i<=4; i++){
			
			for(int w=1; w<=W; w++){
				
				if(wt[i-1] <=w)
					
					dp[i][w] = max(val[i-1]+dp[i-1][w-wt[i-1]], dp[i-1][w]); 
					
				else
				
				dp[i][w] = dp[i-1][w];
				
				}
					
			
			}


	
    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
           cout<<dp[i][w]<<" ";
        }
        cout<<"\n";
    }
		
	
	}

int main()
{
	int val[] = {1,4,5,7};
	int wt[] = {1,3,4,5};

	knapSack(val, wt, 4, 7);
    
    return 0;
}