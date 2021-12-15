#include <stdio.h>
struct MyStruct
{
	char a[100];
	int size;
	int top;
}starck;
void init(int size)
{
	starck.top = -1;
	starck.size = size;
}
void push(int item)
{
	starck.top++;
	starck.a[starck.top] = item;
}
void pop()
{
	starck.a[starck.top] = -9999;
	starck.top--;
}
void print()
{
	int i;
	for(i = 0; i <= starck.top; i++)
		printf("%c ", starck.a[i]);
}