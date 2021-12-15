#include <iostream>
#include <cstdio>
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

void Top(){
		
	printf("%d\n", number[top]);
	
}


void Print(){
	
	for(int i=0; i<=top; i++){
		
		cout<<number[i]<<" ";
		}
	cout<<endl;
	
	}


int main(int argc, char **argv)
{
	Push(1);
	Push(2);
	Push(3);
	Push(4);
	Push(5);
	
	
	Print();
	
	Pop();
	Pop();
	Pop();
	Pop();
	
	
	Top();
	
	return 0;
}