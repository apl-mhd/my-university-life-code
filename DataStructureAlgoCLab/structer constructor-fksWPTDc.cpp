// A Dynamic Programming based solution for 0-1 Knapsack problem
#include<stdio.h>
#include <iostream>
#include <algorithm>
#include <limits>
#include <queue>
using namespace std;


struct q{
	
	q(int a, char ch) : number(a), charcter(ch){}
	
	int number;
	char charcter;
};

typedef struct q q;




int main()
{
	queue<int> x;
	
	queue<q>y;
	
	y.push(q(10,'c'));
	
	cout<<y.front().charcter;
	
	
    return 0;
}