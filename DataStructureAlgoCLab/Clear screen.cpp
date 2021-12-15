#include <iostream>
#include <stdlib.h>
using namespace std;
int main(void)
{
	
	
	
    
     cout << "\tHi, there!\n\n";
     cout << "\nComputers are";
     cout << "great!\n";
     
       
          
       
    
    cout<<"do you want to clear your screen? press 1";
    
    int x;
    cin>>x;
    
    if(x == 1)
    
     cout << "\033[H\033[2J";
    
        
  
	
	

     return 0;
}