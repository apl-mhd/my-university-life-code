
#include<string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	
	FILE *fileWrite, *open;
	char ch, dh;
	int n, i;
	char name[100];
	
	
	fileWrite = fopen("orko.txt", "w");
	
	fprintf(fileWrite, "%d %d", 10,20);
	
	fclose(fileWrite);
	
	open = fopen("orko.txt", "r");
	
	while((fgets(name,100, open)) != NULL){
		
				
	
	printf("%s\n",name);
	
		}
	
	fclose(open);
	
	
	
	
	
	return 0;
}