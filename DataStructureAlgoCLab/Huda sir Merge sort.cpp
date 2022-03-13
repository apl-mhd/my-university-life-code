#include <iostream>
#include <cstdio>
using namespace std;


void merge(int A[],int i1, int j1, int i2, int j2){
	
	int i, j, temp[50], k=0;
	
	i = i1;
	j = i2;
	
	while(i<=j1 && j<=j2){
		
		if(A[i]<A[j])
			temp[k++] = A[i++];
		else
			temp[k++] = A[j++];
		
	}
	
	
		while(i<=j1)
			temp[k++] = A[i++];
	
	while(j<=j2)
			temp[k++] = A[j++];
	
	for(i=i1, j=0; i<=j2;i++,j++){
		
		A[i] = temp[j];
		
		}
	
	}


void mergeSort(int A[], int i, int j){
	
		int mid;
		if(i < j){
				
			 mid = (i+j)/2;
			
			mergeSort(A, i, mid);
			mergeSort(A, mid+1, j);
			merge(A, i,mid, mid+1, j);
			
			
		}
	
}


int main(int argc, char **argv)
{
   
   int A[10] = {10,9,8,7,6,5,4,3,2,1};
   
   mergeSort(A, 0,9);
   
   for(int i=0; i<10; i++){
	  
	  printf("%d  ", A[i]); 
	   
	  }
	
	return 0;
}