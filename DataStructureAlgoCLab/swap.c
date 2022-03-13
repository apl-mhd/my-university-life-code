

#include <stdio.h>
/*
void swap(int *p, int *q){
	
	int temp;
	
	temp =*p;
	
	*p = *q;
	*q =temp;
	
	
	} */ /*swap function using pointer*/
	
	
void swap(int p[], int q[]){
	
	int temp;
	temp =p[0];	
	p[0] = q[0];
	q[0] =temp;
	
	}

int main(int argc, char **argv)
{
	int number[10]={1,2,3,4,5,6};
	
	//int a,b;
	//a=10;b=20;
	swap(&number[0], &number[5]);
	
	printf("%d %d",number[0],number[5]);

	
	return 0;
}