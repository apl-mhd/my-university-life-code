#include <stdio.h>

int main(int argc, char **argv)
{
	
	
	int str[100] = {0,20,30,01,1,2,3,-1,100};
	
	int *p, n, max;
	
	n=20;
	max=0;
	
	p = str;
	
	
	for(n=0; n<9; n++){
		
		
		if(*(p+n) > max )
		
			max =  *(p+n) ;

		}
		
		
		printf("max = %d\n", max);
	
	
		
	
	
	
	return 0;
}