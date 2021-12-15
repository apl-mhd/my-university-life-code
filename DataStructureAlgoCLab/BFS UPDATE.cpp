#include <iostream>
#include <queue>
#include <string.h>
#include <cstdio>
/****************************/
/* (A)------------(B)*/
/*  |              |      input like AB (vertices 4, edges4)
 *  |              |                 AC
 * (C)------------(D)                CD
 *                                   BD
/*                    */



using namespace std;

queue<int> number;


int graph[50][50] = {0};

int edges, vertices;

int visited[100] = {0};

void graphInput(){

	cout<<"Input number of vertices"<<endl;
	cin>>vertices;
	cout<<"Input number of edges"<<endl;
	cin>>edges;
	char v1, v2;


	for(int i=0; i<edges; i++){

			cin>>v1>>v2;
			graph[v1-65][v2-65]=1;
			graph[v2-65][v1-65]=1;

		}

	}

bool isVisited(int v){

	for(int i=0; i<100; i++){
        if(visited[i] == v)
            return true;
	}
return false;
}
void BFS(){
	number.push(0);
	int t,index=0;
	while(!number.empty()){

		t = number.front();
		number.pop();

		if( isVisited(t) != true ){
            visited[index++] = t;


            for(int i =0; i<26; i++){

			if(graph[t][i]){

				if(isVisited(i) != true ){
					number.push(i);
					//cout<<i;
					}
				}

			}

		} /*end if*/
	}

}


void displayGraph(){
	for(int i=0; i<vertices; i++){
			printf("%c->", i+65);
		for(int j=0; j<26; j++){
				if(graph[i][j])
					printf("%c", j+65);
			}

			cout<<endl;

		}

}

int main(int argc, char **argv)
{
	for(int i =0; i<100; i++)
		visited[i] =-1;

	graphInput();




	displayGraph();
	BFS();

	for(int i=0; i<100; i++){

		if(visited[i] !=-1){
			printf("%c", 65+visited[i]);

		}
	}



	return 0;
}