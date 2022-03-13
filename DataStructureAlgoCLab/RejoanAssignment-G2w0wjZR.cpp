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
	
void compare(int sizeWord, int sizeDct){
		
	for(int m=0; m<sizeWord; m++){
	
		printf("%s: ",wordlist[m]);
		int lenchkinput;
		int dictlen;
		int flag=0;
		
	for(int i=0; wordlist[m][i]!='\0';i++){
		
		lenchkinput = i;
			
	}
	
	//printf("len :%d\n", lenchkinput);
	
	for(int n=0; n<sizeDct;n++){
		
		
		
		for(int i=0; dictioNary[n][i]!='\0';i++){
		
		dictlen = i;
			
		}

		if(lenchkinput == dictlen){
			
			if(wordlist[m][0] == dictioNary[n][0] &&   wordlist[m][dictlen] == dictioNary[n][dictlen]){
				
					printf("%s : Correct \n", dictioNary[n]);
					flag=1;
			}
			else{
			
			for(int x=1; x<dictlen; x++){
				
				
				
				if(wordlist[m][x]!=dictioNary[n][x])
				
					flag=1;
				}
			}	
			//printf("both are same:%d\n",dictlen);
			
			}
		
		if (flag == 0)
		
		printf("%s ",dictioNary[n]);
					
}

printf("\n");
	
}
	
}	

int main(int argc, char **argv)
{

	
	printf("Input :");
	input(dictioNary);
	
	//printf("word ind dictionary :%s\n", dictioNary[0]);
	
	//printf("word ind dictionary :%s\n", dictioNary[1]);
	
	int sizeDct = j-1;
	j=0;
	//printf("Size :%d\n",sizeDct);
	
	printf("Check Input: \n");
	
	
	
	input(wordlist);
	int sizeWord = j-1;
	
	printf("output: ");
	
	compare(sizeWord,sizeDct);
	
	//printf("Size : %d\n",sizeWord);
	
	
	
	
	return 0;
}