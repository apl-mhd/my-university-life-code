#include <iostream>
using namespace std;
#define SIZE 3
int number[SIZE+1];
int f=0,r=0;

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

    }
}
void Print(){
    int R, F;

    F = (f+1) %(SIZE +1);
    R = (r+1) % (SIZE+1);

    while(R !=F){

            cout<<number[F]<<" ";

            F = (F+1) % (SIZE +1);


        }

}



int main()
{

  Enquue(10);
  Enquue(20);
  Enquue(40);
  Deque();
  Enquue(30);
Print();
    return 0;
}