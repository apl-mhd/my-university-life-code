#include <iostream>
#include <sys/stat.h>
/***************************/
/* gcc compiler version c++ 11*/
/*only for unix*/
/***************************/
using namespace std;
int main()
{
int n=0;
while(1){
	string s = to_string(n);
	char name[100];
	int i=0;
	while(s[i] != '\0'){
		
		name[i] =s[i];
		i++;
	}
	name[i] = '\0';
	mkdir(name, 0777);
  n++;
 }  
   return 0;
}