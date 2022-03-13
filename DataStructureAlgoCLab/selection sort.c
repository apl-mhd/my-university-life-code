#include <stdio.h>

int main(int argc, char **argv)
{

	int number[4] = {10,5,7,9};
	
	int i, j, temp, pos, min;
	
	
	for(i=0; i<4; i++){
		
		
		min = number[i];
		
		for(j = i+1; j<4; j++){
			
			if(number[j] < min){
			
				min = number[j];
				pos = j;
			}			
			
			}
			
			
			temp = number[pos];
			number[pos] = number[i];
			number[i] = temp;
					
		}
	
		
	for(i = 0; i<4; i++)
			
	
		printf(" %d ",number[i]); 
	
	return 0;
}