#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
#define MAXSIZE 5
int number[MAXSIZE];
int top=-1;

void Push(int x){
		
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

int Top(){
		
	//printf("%d\n", number[top]);
	
	return number[top];
}


void Print(){
	
	for(int i=0; i<=top; i++){
		
		cout<<number[i]<<" ";
		}
	cout<<endl;
	
	}


int main(int argc, char **argv)
{
	string expression;
	
	cin>>expression;
	
	int i, op1,op2, sum=0, x;
	char ch;
	
	for(i=0; i<expression.size(); i++){
		
		ch = expression[i];
		
		if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
			

			
			if(ch == '+'){
				op2 = Top(); Pop();
				op1 = Top(); Pop();
				sum = op2+op1;
				//cout<<sum<<endl;
				Push(sum);
				//Print();
				
				
				}
			else if(ch == '-'){
				op2 = Top(); Pop();
				op1 = Top(); Pop();
				sum = op1-op2;
				//cout<<sum<<endl;
				Push(sum);
				
				}
			else if(ch == '*'){
				op2 = Top(); Pop();
				op1 = Top(); Pop();
				sum = op2*op1;
				//cout<<sum<<endl;
				Push(sum);
				
				}
				else if(ch == '/'){
				op2 = Top(); Pop();
				op1 = Top(); Pop();
				sum = op1/op2;
				//cout<<sum<<endl;
				Push(sum);
				
				}
			
			
			
		}
		
	else{
			
		x =	(int) ch -'0';
			//cout<<"push:"<<x<<endl;
			Push(x);	
		}
				
}

cout<<sum<<endl;


		
		
	

	return 0;
}