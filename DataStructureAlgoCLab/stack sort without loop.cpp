#include <iostream>
using namespace std;

int index =-1;
int number[100];
int size=100;
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
bool empty(){
	
	if (index ==-1)
		return true;
		
	return false;
	
	}
	
void sortInsert(int x){
	
	if(empty() || x>top()){
		
		push(x);
		return;
		
		}
	int p = top();
	pop();
	sortInsert(x);
	push(p);
	
	}	
	
void sortStack(){
	if( !empty()){
		
		int x = top();
		pop();
		sortStack();
		//cout<<x<<" ";
		sortInsert(x);
		//cout<<x<<" ";
		}
	}

int main(int argc, char **argv)
{

	push(100);
	push(20);
	push(-10);
	push(1);
	push(2);
	
	sortStack();
	display();
	
	
	
	return 0;
}