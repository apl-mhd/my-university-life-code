#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <stack>
using namespace std;
int main(int argc, char **argv)
{
    
    int t;
    cin>>t;
    getchar();
    
    while(t--){
    
    string expression;
    char ch, cTop;  
    cin>>expression;
	stack <char> myStack;
    for(int i=0; i<expression.size(); i++){
       
        ch = expression[i];
       
    if(ch == '(' ||  ch == '['){
           
            myStack.push(ch);
 
        }
    else if(ch == ')' ||  ch == ']' ){
           
           if(!myStack.empty()){
            cTop = myStack.top();
           
            if(ch == ')' && cTop == '(')
                myStack.pop();
            else if(ch == ']' && cTop == '[')
               myStack.pop();
            else
               
                myStack.push(ch);
           }
           else
				myStack.push(ch);
        }
    }
    
    
    if(myStack.empty())
		printf("Yes\n");
	else
		printf("No\n");


} 
               
    return 0;
}