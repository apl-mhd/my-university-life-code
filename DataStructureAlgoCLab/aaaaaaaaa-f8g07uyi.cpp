#include <iostream>
#include <cstdio>
#include <map>

using namespace std;


int main(int argc, char **argv)
{
	
	map<string, int> subject;
	map<string, int>::iterator it;
	
	
	int t;
	cin>>t;
	while(t){
		
		string sbjct;
		int n,day,D;
		cin>>n;
	for(int i=0; i<n; i++){
		
		cin>>sbjct>>day;
		
		subject[sbjct] = day;
		
		}
		
		cin>>D;
		cin>>sbjct;
		
		cout<<subject[sbjct];
		if(subject[sbjct] <= D)
			cout<<"YES"<<endl;
		else if(subject[sbjct] <=D+5)
			cout<<"Late"<<endl;
		else
			cout<<"Do your own homework!"<<endl;
		

		
		t--;
	}
/*	
	 for (it=subject.begin(); it!=subject.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';
*/	
	
	return 0;
}