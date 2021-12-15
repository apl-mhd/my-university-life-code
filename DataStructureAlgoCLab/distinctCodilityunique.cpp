
// Author      : Aple Mahmud
// Version     :
// Copyright   : Feel free to copy.
// Description : Hello World in C++, Ansi-style
//============================================================================
 
#include<vector>
#include <iostream>
#include<cstdio>
#include<algorithm>
 
using namespace std;
 
int solution(vector<int> &A){
 
    //int i, count = 0;
 
    sort( A.begin(), A.end() );
    A.erase( unique( A.begin(), A.end() ), A.end() );
 
 
return A.size();
 
 
}
 
int main() {
 
 
vector <int> vec{-10000};
 
printf(" %d \n", solution(vec));
//sort( vec.begin(), vec.end() );
//vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
//printf(" %d ",vec.size());
 
 
 
 
    return 0;
}