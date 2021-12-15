#include <iostream>
#include <cstdio>
#include <algorithm>
#include <climits>

#define MAX 50
using namespace std;



int main() {


   // freopen("input2.txt","r", stdin);

    int n, m, piece;
    cin>>n>>m;

    int puzzle[m];


    for (int i = 0; i <m; ++i) {

        cin>>piece;
        puzzle[i]= piece;

        //cout<<puzzle[i]<<" ";
    }

    sort(puzzle, puzzle+m,greater<int>());



    int min=10000;

    for (int i = 0; i <= m-n ; ++i) {
        for (int j = i+n-1; j <m ; ++j) {
            int m = puzzle[i]-puzzle[j];
            if(m < min)
                min = m;


        }

    }

    cout<<min<<endl;



    return 0;
}