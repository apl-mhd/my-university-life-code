#include <iostream>
#include <cstdio>

using namespace std;


int bSearch(int number[],int low, int high, int mid,int item){
	
		
		if(low > high)
			return 0;
		
		if(number[mid] == item)
			return 1;
		
		else if(number[mid] >item){
			
				high = mid-1;
			}
			
			else
			
				low = mid+1;
				
		
	bSearch(number, low, high, (low+high)/2, item);
		
		//return 0;
		
	
	/*
	int low,high,mid;
	
	low = 0;
	high = n-1;
	
	while(low<=high){
		
		mid = (low+high) / 2;
		
		if(number[mid] == item)
			
			return 1;
			
		else if(number[mid] > item)
			
				high = mid-1;
		
			else
				
				low = mid+1;
		
		
		}
		
	return 0;
	
	*/
	
	}

int main(int argc, char **argv)
{
	
	int number[10] = {1,2,3,4,5,6,7,8,9,10};
	
	
	int n=10;
	
printf(" %d ", bSearch(number, 0, n-1, (n-1)/2, -1));
	
	
	return 0;
}