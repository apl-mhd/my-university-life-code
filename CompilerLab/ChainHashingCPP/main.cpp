#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;

struct  list{

    string name;
    string type;

    list  *next;

};

typedef  list node;

node *link[10];

string nameType;
string name="";
string type="";

void init(){

    for (int i = 0; i <100; ++i) {

        //link[i] = new node;
        link[i] = NULL;
    }
}






void  insert(int key, string name, string type)
{


    node *temp = new  node();
    node *root;

    if (link[key] == NULL){

        temp->name = name;
        temp->type = type;
        temp->next = NULL;
        link[key] = temp;

    }

    else{

        temp->name = name;
        temp->type = type;
        temp->next = NULL;

        root = link[key];

      //  cout<<root<<endl;


      if(link[key]->name == name){
          cout<<name<<" Already exists !"<<endl;
          return;
      }


        while(root->next != NULL){

            root = root->next;

            if(root->name == name){
                cout<<name<<" Already exists !"<<endl;
                return;
            }


        }

        root->next = temp;


    }


}

int hashKey(string key){



    int i=0;
    int k=0;

    while(key[i] !='\0'){



        k +=key[i];
        cout<<k<<endl;
        i++;
    }

    return k % 50;
}




void  dlt(string nm){

    int  key = hashKey(name);

    node *temp,*root;
    root = link[0];

    cout<<root<<endl;
    cout<<link[0]<<endl;


    if (root == NULL) {
        cout << "No " << nm << "found" << endl;
    }
    else if(link[0]->name == nm){
        link[0] = link[0]->next;

    }

    else{


        while(root->name != nm){


            temp = root;
            root = root->next;

            if(root->next == NULL)
                break;


        }

        temp->next = root->next;




    }




}


void showALl(){

    for (int i = 0; i<2; ++i) {

        if (link[i] != NULL){

            node *temp = link[i];
            while(temp != NULL)
            {

                cout<<temp->name<<" ";


                temp = temp->next;

            }

            cout<<endl;

        }


    }
}


/*
int hashKey(string key){



    int i=0;
    int k=0;

    while(key[i] !='\0'){



        k +=key[i];
        cout<<k<<endl;
    i++;
    }

    return k % 50;
}
*/


void show();



void stringSplit(string nameType){


    int len = nameType.length();

    int coma =  nameType.find(',');
    name = nameType.substr(0,coma);
    type = nameType.substr(coma+1,len);


}



int main() {













  //  stringSplit(nameType);



//cout<<name;
    //cout<<name<<endl;
    //cout<<type<<endl;




    init();
    node *x = NULL;

    insert(0,"Apel", "mahmud");
    insert(0,"orko", "mahmud");

    //cout<<link[0]<<endl;
    insert(0,"orin", "mahmud");



    dlt("orin");


    showALl();



}
