#include <iostream>
#include <cstdio>

	
void quickSort(int a[], int f, int l){
		
	int i,j,temp;
			if(f<l){				
			i=f+1;
			j=l;			
				
			while(i<=j){						
				while(a[i]<=a[f]) i++;
					
				while(a[j] >=a[f]){		
					
					if(i>j)
						break;
					 j--;
					 
				}
			printf("i =%d j=%d\n",i,j);
			if(i<j){
			
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				}	  
			}
			
			temp = a[f];
			a[f] = a[j];
			a[j] = temp;
			
			quickSort(a,f,j-1);
			quickSort(a,j+1,l);
				
		}
		
	
}

int main(int argc, char **argv)
{	
	int number[11] = {11,10,9,8,7,6,5,4,3,2,1};
	
	quickSort(number,0,10);
	
	for(int i=0; i<11; i++){
		
		printf(" %d", number[i]);
		
		}

	return 0;
}