#include <stdio.h>
#include <stdlib.h>


void myFunction( int counter)
{
if(counter == 2)
     return;
else
       {
       //cout <<counter<<endl;
                     //printf(" %d ", counter);

       myFunction(--counter);
              printf(" %d ", counter);

       return;
       }
}

int main(){
        myFunction(5);
    return 0;
}