#include <iostream>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <cstring>
#include <cstdio>
using  namespace std;

int main() {






    string exp;
    cin>>exp;

    stack<char> oprt;
    stack<int> oprnd;


    for (int i = 0; i < exp.size(); ++i) {

        if ( exp[i] >= '0' && exp[i]<='9'){

            oprnd.push(exp[i]-48);

        } else{

            oprt.push(exp[i]);
        }


    }


    int t = oprnd.top();
        oprnd.pop();


    while(!oprnd.empty()){

        int t2 = oprnd.top();
        oprnd.pop();

        char op = oprt.top();
        oprt.pop();

        if(op == '+')
            t = t2 + t;

        if(op == '-')
            t = t2 - t;

        if(op == '*')
            t = t2 * t;

        if(op == '/')
            t = t2 / t;


    }

    cout<<t;





    return 0;
}