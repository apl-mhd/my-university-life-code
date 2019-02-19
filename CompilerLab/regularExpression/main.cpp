#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <climits>
using namespace std;
int stringSplit(string nameType);

void menubar();
void integer();


int  main(){


    if('0' < '9')
        cout<<"yes small";



    return  0;

}




void menubar(){

    bool decision = true;

    while(decision){

        cout<<"1. Integer :\n";
        cout<<"2. Variable :\n";
        cout<<"3. Float :\n";
        cout<<"4. Exponent :\n";
        cout<<"5.start with character n a :\n";
        cout<<"6. exit :\n";
        cout<<"Select option from menu :"<<endl;

        string n;
        cin>>n;

        if(n == "1" ){

        }

        else if(n == "2"){

        }
        else if(n == "3"){

        }
        else if(n == "4"){

        }
        else if(n == "5"){


        }
        else if (n == "6"){

            exit(0);

        }
        else{
            cout<<"Invalid input, enter again \n";
        }

    }


}





void integer(){


    string intNumber;
    cin>>intNumber;

}







/*
int stringSplit(string nameType){

    int len = nameType.length();  //string length
    int comma =  nameType.find(',');  //find comma ',' index other it return -1
    int count =0;

    for(int i=0; i<len; i++){

        if(nameType[i] == ',')
            count++;

    }
    return  count;

}
*/




