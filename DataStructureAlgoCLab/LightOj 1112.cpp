#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <string.h>
using namespace std;

#define MAX 100010
#define SET(a) memset(a,1,sizeof(a))

void tree(int input[],int segTree[], int low, int high, int pos){
	
		if(low == high){
			segTree[pos] = input[low];
			return;
		}
		
		int mid = (low+high) /2;
		
		tree(input, segTree, low, mid, 2*pos+1);
		tree(input, segTree, mid+1, high, 2*pos+2);
		
		segTree[pos] = min(segTree[2*pos+1], segTree[2*pos+2]); 
	
	}
	
int query(int segTree[], int qlow, int qhigh, int low, int high, int pos){
		
		if(qlow<= low && qhigh>=high)
			
			return segTree[pos];
			
		if(qlow > high || qhigh<low)
			return 99999;
		
		int mid  = (low+high) /2;
		
		
	int p1 = query(segTree, qlow, qhigh, low, mid, 2*pos+1);
	int p2 = query(segTree, qlow, qhigh, mid+1, high, 2*pos+2);
    
    return min(p1, p2);		
		
}		

int main(int argc, char **argv)
{
	int t,count=1;
	scanf("%d",&t);
	
	while(t--){
		
	int number[MAX];
	
	int i,n, q, segTree[MAX*3]= {0};
	
	scanf("%d%d",&n,&q);
	for(i= 0; i<n; i++){
		
		scanf("%d",&number[i]);
	
		
		}
	
	tree(number, segTree, 0, n-1, 0);
	printf("Case %d:\n",count);
	for(i=0; i<q; i++){
		int x, y;
		scanf("%d%d",&x,&y);
		
		printf("%d\n",query(segTree,x-1,y-1,0, n-1,0));

	
}		
	
	count++;
		}
		
	return 0;
}