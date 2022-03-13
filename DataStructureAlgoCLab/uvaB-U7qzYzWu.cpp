#include <cstdio>
#include <string>
#include <cstring> 
#include <sstream>
#include <iostream>
#include <iostream>


using namespace std;

int reverse(string number){
	
	
		int i, j;
		char temp;
		i=0;
		j= number.size()-1;
		
		
		while(i<j){
			temp = number[i];
			number[i]=number[j];
			number[j] = temp;
			
			i++;
			j--;
			
			}
			
	return  atoi(number.c_str());
	}

int main(int argc, char **argv)
{
	
	
	stringstream m;
	
	int t,x,y,sum,reminder;
	
	string a,b,first;	
	cin>>t;
	
	while(t--){
		sum=0;
		reminder=0;
		cin>>a;
		cin>>b;
		
		x = reverse(a);
		y = reverse(b);
		
		sum = x+y;
		
		//m<<sum;
		 //first = m.str();
		 
		 while(sum != 0 ){
			 
			 //reminder = sum % 10;
			 
			  reminder = reminder*10+(sum%10);
			 
			
			 
			 sum /=10;
			 
			 }
			 
			printf("%d",reminder);
		 
		
		 
		// printf("%c%c%c",first[0],first[1],first[2]);
		
		//printf("%d\n", reverse(first));
		
		//m<<0;
		//string s = to_string(sum);
		//string str = string(intStr);
			
		//cout<<str;
		
		}
	
	
	
	return 0;
}