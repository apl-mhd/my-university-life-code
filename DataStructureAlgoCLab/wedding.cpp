#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>


using namespace std;


int main(int argc, char **argv)
{

	int testCase;
	cin>>testCase;
	
	while(testCase--){

	int totalAmount, cloths;
	
	vector<int>garment[cloths];
	cin>>totalAmount>>cloths;
	
	for(int m=0; m<cloths; m++){
		int tklen;
		cin>>tklen;
		for(int n=0; n<tklen; n++){
			
		int tk;
		cin>>tk;
	garment[m].push_back(tk);
	
	
}

}
	
	for(int i=0; i<cloths-1; i++){
		
		int secondSize = garment[i+1].size();
		
		for(int j=0; j<garment[i].size(); j++){
				int x = garment[i][j];
			
			for(int k=0; k<secondSize; k++){
				
				int y = garment[i+1][k];
				
				if (x+y < totalAmount & (i!=3-1))
					garment[i+1].push_back(x+y);
				else if(x+y<= totalAmount)
					garment[i+1].push_back(x+y);
				
				}
			
				
			}
			
			garment[i+1].erase(garment[i+1].begin(),garment[i+1].begin()+secondSize);
		
		}
		
		
	///for(int i=0; i<cloths; i++){
		
		reverse(garment[cloths-1].begin(), garment[cloths-1].end());
		
		for (int j=0; j<garment[i].size(); j++){
			
			cout<<garment[cloths-1][j]<<" ";
			}
			
		cout<<endl<<"\n";
		
		//}	
	
}
	return 0;
}