
#include <stdio.h>


void display(int n){
	
		printf(" %d ",n);
		
		if(n==0){
		// n=3;
		 printf("\n");
		 return;
	 }
		 
	display(n-1);
	display(n-1);
		
			
		
		
	
	
	}


int main(int argc, char **argv)
{
	display(3);
	
	return 0;
}