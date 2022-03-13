/*
 * 
 * 
 * Friend functions are actually not class member function. 
 * Friend functions are made to give private access to non-class functions.
 * You can declare a global function as friend,
 * or a member function of other class as friend.
 * 
 * 
 * 
 * 
 * 
 * */
#include <iostream>
#include <cstdio>

using namespace std;


class diy{
	
	
	
	public:
		string name;
		int id;
	
	 diy(string x){
		
		name = x;
		 
		}
	diy(){
		
		cout<<"amar sonar bangla\n";
		}
		
	~diy(){
		
		cout<<"destriction\n";
		}
		
};

int main(int argc, char **argv)
{
		diy objct1("Orin");
		diy objct2("Orko");
		diy objct3("Apel");
		diy objct4("Sabi");
		
		diy();
		
		cout<<objct1.name<<" ";
		cout<<objct2.name<<" ";
		cout<<objct3.name<<" ";
		cout<<objct4.name<<" ";
		//objct2.name;
		//objct3.name;
		
	
	return 0;
}