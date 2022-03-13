#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;


int main() {

    int graph[5][5] = {0};

    int i,j;
    int vertex, edg1, edg2,vertex1, vertex2;




    for(i=0; i<4; i++){
       cin>>vertex1>>vertex2;

       graph[vertex1][vertex2] = 1;
        graph[vertex2][vertex1] = 1;
    }


    for(i=0; i<5; i++){

        cout<<i<<":";
        for (j = 0;  j<5 ; j++) {

            if( graph[i][j] == 1)
            cout<<j<<"->";
        }
        cout<<"NULL"<<endl;
    }







    return 0;
}