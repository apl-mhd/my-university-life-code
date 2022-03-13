
#include <iostream>
#include <cstdio>

using namespace std;


class diy{
	
	
	
	public:
		string name;
		int id;
		
	void loop(int n);
};


void diy::loop(int n){
		
		for(int i=0; i<n; i++)
			cout<<n<<" ";
	cout<<"\n";
}
	


int main(int argc, char **argv)
{
	
	diy one;
	int n=18;
	while(n--)
		one.loop(n);
	
	
	return 0;
}