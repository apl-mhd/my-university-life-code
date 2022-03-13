#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>


using namespace std;


int main(int argc, char **argv)
{/*
	8 6 4
2 5 10
4 1 3 3 7
4 50 14 23 8
	*/
	int totalAmount = 100;
	vector<int>garment[4];
	
	garment[0].push_back(6);
	garment[0].push_back(4);
	garment[0].push_back(8);
	
	garment[1].push_back(5);
	garment[1].push_back(10);
	
	garment[2].push_back(1);
	garment[2].push_back(3);
	garment[2].push_back(3);
	garment[2].push_back(7);
	
	garment[3].push_back(50);
	garment[3].push_back(14);
	garment[3].push_back(23);
	garment[3].push_back(8);
	
	
	
	for(int i=0; i<3; i++){
		
		int secondSize = garment[i+1].size();
		
		for(int j=0; j<garment[i].size(); j++){
				int x = garment[i][j];
			
			for(int k=0; k<secondSize; k++){
				
				int y = garment[i+1][k];
				
				if (x+y <= totalAmount)
					garment[i+1].push_back(x+y);
				
				
				}
			
				
			}
			
			garment[i+1].erase(garment[i+1].begin(),garment[i+1].begin()+secondSize);
		
		}
		
		
	//for(int i=0; i<4; i++){
		
		sort(garment[3].begin(), garment[3].end());
		
		for (int j=0; j<garment[3].size(); j++){
			
			cout<<garment[3][j]<<" ";
			}
			
		cout<<endl;
		
		//}	
	
	return 0;
}