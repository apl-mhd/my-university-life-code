#include <cstdio>
#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <algorithm>
#include <functional>
#include <utility>
#define p printf("\n");
using namespace std;
int main(int argc, char **argv)
{
	
	list<int>x;
	
	list<int>:: iterator it;
	
	x.push_back(1);
	x.push_back(2);
	x.push_back(90);
	x.push_back(4);
	x.push_back(6);

	
	for(it = x.begin(); it!=x.end(); it++)
		cout<<*it<<"  ";
		
		p;
	
	x.unique();
	x.sort();
	
	for(auto i:x)
		cout<<i<<" ";
	
	cout<<"\n";
	x.reverse();
	
	
	for(auto i:x)
		cout<<i<<" ";
		
	
	
		//x.clear();
	cout<<x.size();

	if(x.empty())
		cout<<"ff";
	else
		cout<<"Code is sexy";
	
	
	
	return 0;
}