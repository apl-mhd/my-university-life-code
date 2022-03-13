#include <iostream>
#include <set>
#include <vector>
using namespace std;


int main(int argc, char **argv)
{
	set<int>x;
	set<int>m;
	set<int>::iterator it;
	
	vector<set<int>>y[10];
	
	
	x.insert(1);
	x.insert(2);
	x.insert(3);
	x.insert(4);
	
	x.insert(1);
	x.insert(2);
	x.insert(4);
	x.insert(5);
	
	y[0].push_back(x);
	
	m = y[0][0];
	
	for(it = m.begin(); it !=m.end(); it++){
		
		cout<<*it;
		}
	
	
	
	
	return 0;
}