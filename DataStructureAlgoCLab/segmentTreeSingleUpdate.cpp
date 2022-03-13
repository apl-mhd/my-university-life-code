#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;



int inf = INT_MAX;	

int segment[100]={0};

void constructTree(int number[],int start, int end, int pos){
	
	segment[pos]=0;
	
	if(start == end){
		
		segment[pos] = number[start];
		return;
	}

	int mid = (start+end) / 2;
	
	constructTree(number, start, mid, pos*2);
	constructTree(number, mid+1, end, pos*2+1);
	
	segment[pos] = min(segment[pos*2],segment[pos*2+1]);
	
	
	
	}
	
void updateSingle(int start, int end, int pos, int update, int value){
	
	if(update < start || end < update)
		return;
		
	if(update == start && update == end){
	
		segment[pos] = value;
		return;
	}
	
	
	
	if(start == end)
		return;
		
		
	int mid = (start + end)/2;
	
	 updateSingle(start, mid, pos*2, update, value);
	 updateSingle(start, mid, pos*2, update, value);
	
	segment[pos] = min(segment[pos*2], segment[pos*2+1]);
		
	
	
	
}
	


int query(int start, int end, int qstart, int qend, int pos){
	
	
		if(start >= qstart && end<=qend)
			return segment[pos];
		
			
		if(start > qend || end<qstart)
			return inf;
			
	int mid = (start + end) /2;
	int x = query(start,mid, qstart, qend, pos*2);
	int y = query(mid+1, end, qstart, qend, pos*2+1);
	
	return min(x,y);
	
}


int main(int argc, char **argv)
{
	

	/*                 0  1   2    3   3 5 6  7  */
	int number[8] = {1,2,3,4,5,6,7,8};
	
	int size = sizeof(number)/sizeof(number[0])-1;
	

	constructTree(number,0,size, 1);
	
	
	//for(int  i=0; i<20; i++)
	
		//cout<<i<<":"<<segment[i]<<" \n";
	
	for(int i=1; i<15; i++)
		cout<<i<<":"<<segment[i]<<" ";
	cout<<endl;
	
	updateSingle(0,7,1, 0, -111111);
	
	for(int i=1; i<15; i++)
		cout<<i<<":"<<segment[i]<<" ";
	
	/*
	cout<<query(0, size, 0, 7,1)<<"\n";
	cout<<query(0, size, 0, 3,1)<<"\n";
	cout<<query(0, size, 4, 7,1)<<"\n";
	cout<<query(0, size, 1, 3,1)<<"\n";
	
	*/
	
	
	
	return 0;
}