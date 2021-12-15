#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
#define MAXSIZE 100
char number[MAXSIZE];
int top=-1;

void Push(char x){
		
	if(top == MAXSIZE -1){
		cout<<"Error: Overflow !"<<endl;
		return;
	}
	
	number[++top] = x;
	
}

void Pop(){
	
	if(top == -1)
	cout<<"Error:Underflow."<<endl;
	
	else
		top--;
	
}

char Top(){
		
	//printf("%d\n", number[top]);
	
	return number[top];
}


void Print(){
	
	for(int i=0; i<=top; i++){
		
		cout<<number[i]<<" ";
		}
	cout<<endl;
	
	}
bool isEmpty(){
		
	if(top == -1)
		return false;
	else
	return true;
	
}


int main(int argc, char **argv)
{
	string expression;
	char ch, cTop;
	cin>>expression;
	
	for(int i=0; i<expression.size(); i++){
		
		ch = expression[i];
		
	if(ch == '(' || ch == '{' || ch == '['){ 
			
			Push(ch);

		}
	else if(ch == ')' || ch == '}' || ch == ']'){
			
			cTop = Top();
			
			if(ch == ')' && cTop == '(')
				Pop();
			else if(ch == '}' && cTop == '{')
				Pop();
			else if(ch == ']' && cTop == '[')
				Pop();
			else
				
				Push(ch);
			 
		}
	}
	
	bool check;
	
	check = isEmpty();
	
	ch = Top();
	
	if(check == false)
		cout<<"Ballanced"<<endl;
		
	else if(top>1)
		cout<<"Unmatched"<<endl;
	else if(ch =='(' || ch =='{' || ch =='[')
		cout<<"Opening bracket overflow"<<endl;
	else
		cout<<"Closing bracket overflow"<<endl;
	
	
				
	return 0;
}