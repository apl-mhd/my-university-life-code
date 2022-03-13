#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>


using namespace std;
/*
    8 6 4
2 5 10
4 1 3 3 7
4 50 14 23 8
    */

int main(int argc, char **argv)
{



	int testCase;
	cin>>testCase;
	cout<<testCase;
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
cout<<"end tk len";

}
	
	for(int i=0; i<cloths-1; i++){
		
		int secondSize = garment[i+1].size();
		
		for(int j=0; j<garment[i].size(); j++){
				int x = garment[i][j];
			
			for(int k=0; k<secondSize; k++){
				
				int y = garment[i+1][k];
				
				if (x+y < totalAmount & (i!=cloths-2))
					garment[i+1].push_back(x+y);
				else if(x+y<= totalAmount)
					garment[i+1].push_back(x+y);
				
				}
			
				
			}
			
			garment[i+1].erase(garment[i+1].begin(),garment[i+1].begin()+secondSize);
		
		}
		
		

for(int i=0; i<cloths; i++){
       
        //sort(garment[3].begin(), garment[3].end());
       
        for (int j=0; j<garment[i].size(); j++){
           
            cout<<garment[i][j]<<" ";
            }
           
        cout<<endl<<"\n";
       
        }  
        
        cout<<"after short\n";

	sort(garment[cloths-1].begin(), garment[cloths-1].end(), greater<int>());
	
	for (int j=0; j<garment[cloths-1].size(); j++){
           
            cout<<garment[cloths-1][j]<<" ";
            }
           
        cout<<endl<<"\n";
       
        

		
	
}
	return 0;
}