#include <stdio.h>

int main(int argc, char **argv)
{
	
	
	char str[100];
	
	
	char *ch;
	int n, vowel,consonent;
	
	vowel = 0;
	consonent = 0;
	
	ch = str;
	
	gets(str);
	
	
	for(n=0; ch[n]; n++){
		
		
			if( ch[n] == 'a' || ch[n] ==  'e' || ch[n] ==  'i' || ch[n] ==  'o' || ch[n] ==  'u')
	
				vowel++;
				
			else{
				
				consonent++;
				
				}
		}
		
		
		printf("vowel = %d\nconsonent = %d\n", vowel, consonent);
		
		
	
	
	
	
	
	return 0;
}