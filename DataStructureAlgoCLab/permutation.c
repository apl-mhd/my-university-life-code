

#include <stdio.h>

int i;
int number[4]= {0,1,2,3};

void display(int n){
	
	
	if(n==4)
	
		return;
	
	
	for(i =0; i<4; i++){
		
		//if(number[i] != n)
		printf(" %d %d",n, number[i]);
		
		printf("\n");
		
		}
		
		
		
	display(n+1);
				
				
	}



int main(int argc, char **argv)
{
	
	
	display(0);
	
	
	return 0;
}