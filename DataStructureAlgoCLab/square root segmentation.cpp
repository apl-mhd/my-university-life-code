#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

struct node{
	
	//int start=0, end=0, sum=0;
	int start, end, sum;
} blockSum[100];


void sumUp(int number[], int size, int blockSize){
	
	
	
	
	int blockIndx=-1;
	
	for (int i=0; i<size; i++){
		if((i % blockSize) == 0){
			blockIndx++;
			
			blockSum[blockIndx].start=i;
			blockSum[blockIndx].end=i+blockSize-1;
			
		}
			
		blockSum[blockIndx].sum+=number[i];
		
	}
	
}

int query(int qstart, int qend, int number[],int blockSize){
	
	int totalsum=0;
	
	for(int i=0; i<blockSize; i++){
		
		if(qstart<=blockSum[i].start  &&  blockSum[i].end<=qend ){
			
			totalsum+=blockSum[i].sum;
			cout<<endl<<totalsum<<endl;
			
			cout<<'w';
		}
		
		
	else if(qstart<=blockSum[i].start && qend <=blockSum[i].end){
		
				for(int j=blockSum[i].start; j<=qend; j++)
					totalsum+=number[j],cout<<'x';
		}
		
	else if(qstart>=blockSum[i].start && blockSum[i].end <=qend){
		
				for(int j=qstart; j<=blockSum[i].end; j++)
					totalsum+=number[j],cout<<'y';
		}
		
		
		
	//else if(qstart<=blockSum[i].start && blockSum[i].end <=qend){
		
		
		//}	
		
	}
	
	return totalsum;
}

int main(int argc, char **argv)
{
	
	
	int number[]={1,2,3,4,5,6,7,8,9}; 
		
	int size = sizeof(number) / sizeof(number[0]);
	
	
	int blockSize = sqrt(size);

	cout<<blockSize<<endl;
	
	sumUp(number, size, blockSize);
		
	for(int i =0; i<blockSize; i++){
		cout<<blockSum[i].sum<<" ";
		cout<<blockSum[i].start<<" ";
		cout<<blockSum[i].end<<endl<<" ";
	}
	cout<<endl<<query(1,4,number, blockSize);
	cout<<endl<<query(0,5,number, blockSize);
	//cout<<endl<<query(3,5,number, blockSize);
	//cout<<endl<<query(0,5,number, blockSize);
	//cout<<endl<<query(3,8,number, blockSize);
	//cout<<endl<<query(0,8,number, blockSize);
	//cout<<endl<<query(0,4,number, blockSize);
	//cout<<endl<<query(0,5,number, blockSize);
	//cout<<endl<<query(2,5,number, blockSize);
	//cout<<endl<<query(6,8,number, blockSize);
	
	
	return 0;
}