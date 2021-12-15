#include <stdio.h>
#include <iostream>
#include "stack.h"

using namespace std;

int top=0;
int number[100];
int size;


void stackSize(int Size){
	
	size = Size;
	
	
	
}
void Push(int data){
	
	
	
	if(size == top)
		cout<<"stack overflow"<<endl;
	else
		number[top++] = data;
	
	
		
}

void Pop(){
	top -=1;
	
	if(top <0)
		cout<<"underflow";
	else
		number[top] = -1;
		 
}
void Print(){
	
	if(top <= 0)
		cout<<"no data";
	
	for(int i=0; i<top; i++){
		
		cout<<number[i]<<" ";
	
	}
	
	
	cout<<endl;
	
	
}



int main(int argc, char **argv)
{
	


	
	
	
	return 0;
}