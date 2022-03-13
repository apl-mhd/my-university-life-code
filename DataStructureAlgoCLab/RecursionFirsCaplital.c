#include <stdio.h>
#include <string.h>

int flag =0;

void firstCapital(char *cp){
		
		
		if(*cp > 'A' && *cp < 'Z'){
			
			printf("First capital letter is = %c",*cp);
			
			return;
			}
			
		firstCapital(cp+1);
		
		
		
	}


int main(int argc, char **argv)
{
	
	
	
	char mainStr[100];
	
	char *m;
	
	
	gets(mainStr);
	
	
	
	
	m = mainStr;
	
firstCapital(m);

	
	
	
	return 0;
}