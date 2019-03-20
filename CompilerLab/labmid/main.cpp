#include <iostream>
#include <cstdio>
#include <map>
#include <string>
#include <cstdio>
#include <cmath>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <climits>
using namespace std;
string name;

void rexpression(){

    cin>>name;
    int i=0;





    int at = name.find('@');

    //cout<<at;

    if (at == -1){
        cout<<"Not Accept\n";
        return;
    }

    if(name[0] >='0' && name[0]<= '9'){
        cout<<"Not Accept\n";
        return;
    }



        while(name[i] != '@'){


            if(!(name[i] >= 'A' && name[i] <= 'Z')){

                cout<<"Not Accept\n ";
                return;
            }

            i++;

        }

        i= i+1;

        if(name[i] != 'N'){

            cout<<"Not Accept\n ";
            return;
        }




        i = i+1;

        if(!(name[i] >= '1' && name[i]<='3')){

            cout<<"Not Accept\n ";
            return;
        }


        i = i+1;

        int z=0;

        while(name[i] != '\0' ){

            if(name[i] == '0'){

                z++;
            }

            if(z == 3){

                cout<<"Not Accept\n "<<;
                return;

            }


            if(!(name[i] >='0' && name[i]<='9')){
                cout<<"Not Accept\n "<<;
                return;
            }


            i++;
        }


        cout<<"Accept\n";





}

int main() {


    while(true){

        rexpression();
    }



    return 0;
}