#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
      char vertex[26];

      int i, j,vertices,v1,v2,x;
      char ch = 'A';
      char v;
      int graph[10][10] ={0};



      for(i=0; i<26; i++)
        vertex[i]= ch++;

        cout<<"No of vertices";
        cin>>vertices;





        for(i=0; i<vertices; i++){

            for(j=i+1; j<vertices; j++){

                printf("%c %c:", vertex[i], vertex[j]);
                    cin>>x;
                    graph[i][j] =x;
                    graph[j][i] =x;

            }
        }


         for(i=0; i<vertices; i++){

            printf("%c->", vertex[i]);

            for(j=0; j<vertices; j++){

                   if(graph[i][j] == 1)
                printf(" %c",vertex[j]);
            }
            cout<<endl;
        }

    cout<<"input vertex";

      cin>>v;

        x = v - 65;


        for(i=0; i<vertices; i++){

            if(graph[x][i] ==1){

                cout<<vertex[i]<<" ";
            }

        }




    return 0;
}