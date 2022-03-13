#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int inf = INT_MAX;	

int segment[100]={0};
int lazy[100]={0};

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

void updateLazy(int start , int end, int qstart,int qend, int pos, int value ){
	
	
	if(lazy[pos] !=0){
		
		
		segment[pos] +=lazy[pos];
		
		if(start !=end){
			
			lazy[pos*1] +=lazy[pos];
			lazy[pos*2] +=lazy[pos];
			
			
			
			}
		lazy[pos]=0;
		
		
		
		}
	
	
	/*if not in a range*/
	
	
	if(start > end|| start > qend || end < qstart)
		return;
	
	
	/*full range*/
	if(start >= qstart && end<=qend){
		
		segment[pos] +=value;
		
		if(start !=end){
			
			lazy[pos*2] +=value;
			lazy[pos*2+1] +=value;
			
		}
		
	return;	
	}
	
	int mid = (start + end)/2;
	
	updateLazy(start, mid, qstart, qend, pos*2, value);
	updateLazy(mid+1,end, qstart, qend, pos*2+1, value);
	segment[pos] =min(segment[pos*2] , segment[pos*2+1]);	
}
	
	

int query(int start , int end, int qstart,int qend, int pos, int value ){
	
	
	if(lazy[pos] !=0){
		
		
		segment[pos] +=lazy[pos];
		
		if(start !=end){
			
			lazy[pos*1] +=lazy[pos];
			lazy[pos*2] +=lazy[pos];
			
			
			
			}
		lazy[pos]=0;
		
		
		
		}
	
	
	/*if not in a range*/
	
	
	if(start > end|| start > qend || end < qstart)
		return 99999;
	
	
	/*full range*/
	if(start >= qstart && end<=qend){
		
		
		
		if(start !=end){
			
			lazy[pos*2] +=value;
			lazy[pos*2+1] +=value;
			
		}
		return segment[pos];
	}
	
	int mid = (start + end)/2;
	
	int x = query(start, mid, qstart, qend, pos*2, value);
	int y =	query(mid+1,end, qstart, qend, pos*2+1, value);
	return min(x, y);
	
	
	
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
	int number[8] = {1,2,3,4,5,6,7,-10};
	
	int size = sizeof(number)/sizeof(number[0])-1;
	

	constructTree(number,0,size, 1);
	
	updateLazy(0, size, 0,3,1,-20);
	
	
	cout<<query(0,size,0,7,1)<<endl;
	
	for(int i=0; i<15; i++)
		cout<<lazy[i]<<" ";
	
	printf("\n");
	
	
	
	return 0;
}