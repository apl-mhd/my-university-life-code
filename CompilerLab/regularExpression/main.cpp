#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <climits>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
#include <vector>

using namespace std;
int stringSplit(string nameType);

void menubar();
void integer();
void  variable();
void  floating();
void  exponent();
void startWith();


int  main(){


    float intNumber =  0E5 ;
    cout<<intNumber<<endl;


    menubar();


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
        cout<<"Select option from menu :"<<endl<<endl;

        string n;
        cin>>n;

        if(n == "1" ){

            integer();

        }

        else if(n == "2"){

            variable();

        }
        else if(n == "3"){

            floating();

        }
        else if(n == "4"){
            exponent();

        }
        else if(n == "5"){

            startWith();

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


    cout<<"Enter integer :\n";

    string intNumber;
    cin>>intNumber;

    int size = intNumber.length();

    if(  intNumber[0] == '0'){

        cout<<"Not Accept : "<<intNumber<<endl;
        return;
    }
    if(  (intNumber[0] == '+' || intNumber[0] == '-') && intNumber[1] == '0'){

        cout<<"Not Accept : "<<intNumber<<endl;
        return;
    }


    for (int i = 0; i <size; ++i) {



        if (i > 0 && (intNumber[i] =='+' || intNumber[i] =='+')){

            cout<<"Not Accept : "<<intNumber<<endl;
            return;
        }


        if ( ('0' <=  intNumber[i] && intNumber[i] <= '9') || (intNumber[i] =='+' || intNumber[i] =='-') ){




            continue;

        } else{

            cout<<"Not Accept : "<<intNumber<<endl;
            return;
        }


    }


    cout<<"Accept : "<<intNumber<<endl;



}


void variable(){

    cout<<"Enter Variable :\n";

    string intNumber;
    cin>>intNumber;

    int size = intNumber.length();


    if((intNumber[0] <='9' && intNumber[0] >= '0')){
        cout<<"Not Accept aa: "<<intNumber<<endl;
        return;
    }


    for (int i = 0; i <size; ++i) {


        if((intNumber[i] <='z' && intNumber[i] >= 'a')  ||
        (intNumber[i] <='Z' && intNumber[i] >= 'A')  ||
                (intNumber[i] <='9' && intNumber[i] >= '0' || intNumber[i] == '_')
        ){

            continue;
        }
        else{

            cout<<"Not Accept : "<<intNumber<<endl;
            return;
        }


    }

    cout<<"Accept : "<<intNumber<<endl;


}

void  floating(){

    cout<<"Enter Float Number :\n";

    string intNumber;
    cin>>intNumber;

    int size = intNumber.length();
    int c=0;


    if((intNumber[size-1] == '.')){
        cout<<"Not Accept : "<<intNumber<<endl;
        return;
    }


    for (int i = 0; i <size; ++i) {


        if (intNumber[i] == '.')
            c++;

        if (c>1){

            cout<<"Not Accept : "<<intNumber<<endl;
            return;
        }


        if (i > 0 && (intNumber[i] =='+' || intNumber[i] =='+')){

            cout<<"Not Accept : "<<intNumber<<endl;
            return;
        }



        if ( ('0' <=  intNumber[i] && intNumber[i] <= '9') || intNumber[i] == '.'  || (intNumber[i] =='+' || intNumber[i] =='-')  ){

            continue;

        } else{

            cout<<"Not Accept : "<<intNumber<<endl;
            return;
        }


    }

    if(c== 0){
        cout<<"Not Accept : "<<intNumber<<endl;
    }
    else
        cout<<"Accept : "<<intNumber<<endl;


}


void  exponent(){

    cout<<"Enter Exponent Number :\n";

    string intNumber;
    cin>>intNumber;

    int size = intNumber.length();
    int c=0,e=0,plus=0,minus=0;
    cout<<size<<endl;

    if((intNumber[size-1] == '.')){
        cout<<"Not Accept aa: "<<intNumber<<endl;
        return;
    }


    for (int i = 0; i <size; ++i) {


        if (intNumber[i] == '.')
            c++;

        if (intNumber[i] == 'E')
            e++;

        if (intNumber[i] == '+')
            plus++;

        if (intNumber[i] == '-')
            minus++;


        if (c>1 || e>1 || plus >1 || minus >1){

            cout<<"Not Accept : "<<intNumber<<endl;
            return;
        }


        if ( ('0' <=  intNumber[i] && intNumber[i] <= '9') || intNumber[i] == '+' || intNumber[i] == '-' || intNumber[i] == '.' || intNumber[i] == 'E' ){

            continue;

        } else{

            cout<<"Not Accept : "<<intNumber<<endl;
            return;
        }


    }


    if(c== 0 || e == 0 || plus ==0 || minus == 0){
        cout<<"Not Accept : "<<intNumber<<endl;
    }
    else
        cout<<"Accept : "<<intNumber<<endl;



}


void startWith(){

    cout<<"Enter String Start With n :\n";

    string intNumber;
    cin>>intNumber;

    int size = intNumber.length();


    if (size > 1){

        if(('0' <=  intNumber[1] && intNumber[1] <= '9')){
            cout<<"Not Accept aa: "<<intNumber<<endl;
            return;
        }

    }


    if((intNumber[0] != 'n')){
        cout<<"Not Accept aa: "<<intNumber<<endl;
        return;
    }

        cout<<"Accept : "<<intNumber<<endl;

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




