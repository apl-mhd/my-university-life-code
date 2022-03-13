#include <stdio.h>

int main(int argc, char **argv)
{
	
	
	char str[100];
	
	
	char *ch;
	int n, count;
	
	count = 0;
	
	
	
	ch = str;
	
	gets(str);
	
	
	for(n=0; ch[n] != '\0'; n++){
		
			count++;
			
		}
		
		
		printf("Total word = %d\n", count);
		
		
	
	
	
	
	
	return 0;
}