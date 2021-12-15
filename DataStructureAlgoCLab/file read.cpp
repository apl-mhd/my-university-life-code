
#include <stdio.h>

int main(int argc, char **argv)
{
	
	
	
	
	FILE  *writeFile;
	
	int  num;
	
		writeFile = fopen("first.text", "w+");
	
		
		
		fprintf(writeFile, "%d", 2010);
		
		fscanf(writeFile, "%d", &num);
		
		printf("%d\n", num);
	

		fclose(writeFile);
	
	return 0;
}