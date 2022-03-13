#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main(int argc, char **argv)
{
		
	vector<int> phone;
	vector<int> caseRemember;
	
	int i, number,start,count=0,n, loopSum=0, Case=1, caseRememberIndex=0,pos=0;
	//unsigned int j;
	
	//cin>>n;
	
	while(cin>>n){
		
		loopSum +=n;
		
		if( n !=0){
			
			caseRemember.push_back(n); //case stored
			
			for(i=0; i<n; i++){
		
			cin>>number;
		
			phone.push_back(number);
		
		}
	}	
		
	else{
		
	//printf("total case: %lu\n",caseRemember.size());
		
	//for(j=0; j<caseRemember.size(); j++){
		
		for(i = 0; i<loopSum; i++){
			
			if(phone[i] - phone[pos]== caseRemember[caseRememberIndex]-1){
			//if(i == caseRemember[caseRememberIndex]-1 ){
			
				printf("Case %d:\n", Case );
	            
	            Case +=1;
	            caseRememberIndex +=1;
	            pos = i+1;
			}
			if(phone[i+1] - phone[i] ==1){
				
				
				count++;
			}
			
			
			else if(count > 0) {
				
				start = i - count;
				printf("0%d-%d\n",phone[start],phone[start] + count);
				
				
				count = 0;
				
				}
				
			else{
					
					printf("0%d\n",phone[i]);
				
				}
			
			
			}
		
		//} // outer for loop
		
	
	break;
	
	} //end else
}
	return 0;
}