#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <string.h>
using namespace std;

#define MAX 100010


void tree(int input[],int segTree[], int low, int high, int pos){
	
		if(low == high){
			segTree[pos] = input[low];
			return;
		}
		
		int mid = (low+high) /2;
		
		tree(input, segTree, low, mid, 2*pos+1);
		tree(input, segTree, mid+1, high, 2*pos+2);
		
		segTree[pos] = segTree[2*pos+1] + segTree[2*pos+2]; 
	
	}
	

long long query(int segTree[], int qlow, int qhigh, int low, int high, int pos){
       
        if(qlow<= low && qhigh>=high)
           
            return segTree[pos];
           
        if(qlow > high || qhigh<low)
            return 0;
       
        int mid  = (low+high) /2;
       
       
    long long p1 = query(segTree, qlow, qhigh, low, mid, 2*pos+1);
    long long p2 = query(segTree, qlow, qhigh, mid+1, high, 2*pos+2);
   
    return p1 + p2;    
       
}      

void update( int segTree[], int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return; 
    if (b >= i && e <= i) {
		
		if( newvalue == 0){
			
			printf("%d\n",segTree[node]);
			segTree[node] = 0;
		}
		else	 
			segTree[node] += newvalue; 
        return;
    }
    int mid = (b + e) / 2;
    update(segTree, node*2+1, b, mid, i, newvalue);
    update(segTree, node*2+2, mid + 1, e, i, newvalue);
  
    segTree[node] = segTree[node*2+1] + segTree[node*2+2];
    
}


	

int main(int argc, char **argv)
{
	int t, Case=0;
	scanf("%d",&t);
	
	while(t--){
		
	int number[MAX];
	
	int i,n, q, segTree[MAX*3]= {0};
	
	scanf("%d%d",&n,&q);
	for(i= 0; i<n; i++){
		
		scanf("%d",&number[i]);
	
		
		}
	
	tree(number, segTree, 0, n-1, 0);
	
	Case++;
	printf("Case %d:\n", Case);

	for(i=0; i<q; i++){	
		int x, y, z;
		
		
		scanf("%d",&x);
		if(x== 1){
			
			scanf("%d",&y);		
			update( segTree, 0, 0, n-1, y, 0);
			
			}
		
		else if(x == 2){
			
				scanf("%d%d",&y,&z);
				update( segTree, 0, 0, n-1, y, z);
			
			}
		else{
			
			 	scanf("%d%d",&y,&z);
			 	printf("%lld\n",query(segTree,y,z,0, n-1,0));
			 	//cout<<query(segTree,y,z,0, n-1,0)<<endl;			
			
			}
			
	}
	
}
		
	return 0;
}