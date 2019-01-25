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

void init(){

    for (int i = 0; i <100; ++i) {

        link[i] = new node;
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

        while(root->next != NULL){
            root = root->next;
        }

        root->next = temp;

    }





}



void showALl(){

    for (int i = 0; i<2; ++i) {

        if (link[i] != NULL){

            node *temp = link[i];
            while(temp != NULL){
                cout<<temp->name<<" ";
                temp = temp->next;

            }

            cout<<endl;
        }


    }
}



void show();


int main() {



    init();

    node *x = NULL;



      insert(0,"Apel","Mahmud");
      insert(0,"orin","Mahmud");
      insert(0,"sabi","Mahmud");
        insert(1,"Gaza","khor");

      showALl();




}

