#include <iostream>
#include <cstdio>

using namespace std;

char dictioNary[20][20];
char wordlist[20][20];

int j=0;
void input(char dictioNary[20][20]){
	
	int i;
	char word[100];
	while(word[0]!='#'){
		
		scanf("%s",word);
		
		for(i =0; word[i]!='\0'; i++){
			
			dictioNary[j][i]=word[i];
			
				//printf("%c",name[i]);
			
			
		}
		dictioNary[j][i]='\0';
		
		j++;
		
		
		//printf("%d = %s\n",i,name);
		
		//i--;
	}
	
	
	}
int wordLen(char word[50]){
	
	int i;
	for( i=0; word[i] !='\0'; i++);
		
	return i;
	
	}
	
void compare(char dictioNary[20][20]){
	
	char wrd[50];
	int flag =0;
	while(wrd[0] !='#'){
		
		scanf("%s", wrd);

		printf("%s: ", wrd);
	for(int i=0; i<j; i++){
			
			//printf("hello\n");
		int dictioNarySize = wordLen(dictioNary[i]);
		int wrongWordSize = wordLen(wrd);
		//printf("%d",dictioNary);
		
		
		
		if(dictioNarySize==wrongWordSize){
			
			if(wrd[0]== dictioNary[i][0] && wrd[dictioNarySize-1]== dictioNary[i][dictioNarySize-1])
			
			printf("Correct\n");
			
		}
		
		else if(dictioNarySize==wrongWordSize){ 
			wrd[0] == dictioNary[i][0];
			wrd[wrongWordSize-1] == dictioNary[i][wrongWordSize-1];
			
			
			
			for(int k=0; k<dictioNarySize; k++){
						
				if(wrd[k] != dictioNary[i][k]){
			
					flag=1;
					printf("vejal\n");
				}
			} 
			
			if(flag==0){
			printf("%s ",dictioNary[i]);
			
			
		}
	}
	
	
	
		
}//end outer for loop
}//end while loop
}//end function	

int main(int argc, char **argv)
{

	
	printf("Input :");
	input(dictioNary);
	
	compare(dictioNary);
	
	

	
	return 0;
}