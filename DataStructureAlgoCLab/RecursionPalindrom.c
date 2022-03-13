#include <stdio.h>
#include <string.h>

int flag =0;

int palindrome(char *cp, int start, int end){
		
		
		if(start == end || start > end)
			
			return flag =0;
		
		if(*(cp+start) != *(cp+end))
			
			return  flag=-1;
		
		
	
		palindrome(cp, start+1, end -1);
		
		
		
	}


int main(int argc, char **argv)
{
	
	
	
	char mainStr[100];
	
	char *m;
	
	int end,start=0;
	gets(mainStr);
	
	
	end = strlen(mainStr)-1;
	
	m = mainStr;
	
palindrome(m, start, end);
	
//printf("%d", flag);

	if(flag == 0)
	
		printf("Palindrome\n");
	else
		printf("Not palindrome\n");
	
	
	
	
	
	return 0;
}