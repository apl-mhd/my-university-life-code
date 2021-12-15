#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;


void printMatrix(int mat[7][6], int row, int col){




    for(int i=0; i<row; i++){

        for(int j=0; j<col; j++){

           cout<<mat[i][j]<<" ";
            //mat[i][j]=0;
        }
        cout<<endl;
    }


}



int main() {


    char row[] = {'a','b','c','d','a','f'};
    char col[] = {'a','c','b','c','f'};



    int rowSize = sizeof(row)/ sizeof(char);
    int colSize = sizeof(col)/ sizeof(char);

    int t[7][6];


    for (int i = 0; i <= 6 ; ++i) {
        for (int j = 0; j <=5 ; ++j) {

            if(i==0 || j == 0) {
                t[i][j] = 0;

                continue;
            }

            if(row[i-1] == col[j-1]){

                t[i][j] = t[i-1][j-1] +1;

            } else{

                t[i][j] = max(t[i][j-1], t[i-1][j]);


            }

        }

    }

    printMatrix(t, 7,6);

    return 0;
}