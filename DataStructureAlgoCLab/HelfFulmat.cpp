#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
	
	vector <char> number;
	
	int length, i;
	
	char equation[100];
	
	gets(equation);
	
	
	
	length= strlen(equation);
	
//	printf("%d",length);
	
	for(i=0;i<length; i+=2){
		
		number.push_back(equation[i]);
		
		
		
		}
		
		sort(number.begin(),number.end());
		
		for(i =0; i<number.size()-1; i++){
			
			
			printf("%c+", number[i]);
			
			
			}
			
			printf("%c", number[i]);
		
		
		//printf("%d", number.size());
	
	
	return 0;
}