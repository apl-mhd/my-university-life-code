#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    char A[] = {'a','b','c','d'};

    char B[] = {'a','b','x','d'};


    int i=0, j=0, flag,count=0;

    while(true){


        if(i >= 4)
            break;



        if(A[i]==B[j]){
            count++;
            i++;
            j++;
            flag=j;
        } else{

            j++;
        }

        if(j==4){

            i++;
            j=flag;
        }



    }

    cout<<count<<endl;

    return 0;
}