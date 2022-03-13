#include <iostream>
using namespace std;

int index =-1;
int number[100];
int size=1;
void push(int x){
	
	if(index+1==size){
		cout<<"overFlow\n";
		}
	else{
	index++;
	number[index] = x;
}
	}
	
int top(){
	
	
return number[index];	
	}
	
void pop(){
	
	if(index<0)
		cout<<"underflow";
	else
	index-=1;
	
	}
	
	
	
void display(){
	
	for(int i=0;i<=index;i++)
		cout<<number[i]<<" ";
		cout<<endl;
	
	}

int main(int argc, char **argv)
{
	push(10);
	pop();
	push(10);
	display();
	
	
	
	
	return 0;
}