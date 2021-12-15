#include <iostream>
using namespace std;
#define SIZE 3
int number[SIZE+1];
int f=0,r=0,start=1;

void Enquue(int x){

  int  s = (r+1) % (SIZE +1);

    if(s== f) cout<<"FULL"<<endl;
    else{

        r=s;
        number[r] = x;
    }

      //start =  ((f+1) % (SIZE+1)) + 1 ;
}
void Deque(){

    if(f==r) cout<<"Empty"<<endl;

    else{

        f = (f+1) % (SIZE+1);

        start = f+1;


    }


}



int main()
{

  Enquue(10);
  Enquue(20);
  Enquue(30);
  Deque();
  Enquue(40);


 //cout<<start<<endl;


  for(int i=start; i<=r; i++)
        cout<<number[i]<<" ";

    return 0;
}