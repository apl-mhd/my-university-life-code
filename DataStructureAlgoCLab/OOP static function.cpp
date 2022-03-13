
#include <iostream>
#include <cstdio>

using namespace std;


class diy{
	
	
	
	public:
		string name;
		int id;
		
	void loop(int n);
	
	static void display(){  
		/*static function must be in public*/
		/*static function call without object create*/
		
		cout<<"amar sonar banagla";
		}
};


void diy::loop(int n){
		
		for(int i=0; i<n; i++)
			cout<<n<<" ";
	cout<<"\n";
}
	


int main(int argc, char **argv)
{
	diy :: display();
	
	return 0;
}