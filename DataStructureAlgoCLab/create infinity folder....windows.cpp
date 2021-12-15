#include <direct.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/***************************/
/*windows */
/***************************/

int main()
{
int n=0;
while(1){

char name[100];

itoa(n, name, 10);

	mkdir(name);
  n++;
 }
   return 0;
}