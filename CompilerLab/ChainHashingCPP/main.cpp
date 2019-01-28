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
string iname="";
string itype="";

void init(){

    for (int i = 0; i <50; ++i) {

        //link[i] = new node;
        link[i] = NULL;
    }
}




int  hashKey(int k,string name);
void  insert(int k, string name, string type);
void  dlt(int k, string name);
void  search(int k, string name);
void  update(int k, string name,string updateName);
void showALl();
void stringSplit(string nameType);
void newLine();


int main() {

    
    init();
    node *x = NULL;

    insert(0,"a", "mahmud");
    insert(0,"b", "mahmud");
    insert(0,"c", "mahmud");

    insert(1,"a", "mahmud");
    insert(2,"b", "mahmud");
    insert(3,"c", "mahmud");

    insert(1,"ab", "mahmud");
    insert(1,"ax", "mahmud");
    insert(2,"ac", "mahmud");
    insert(3,"ad", "mahmud");

    //dlt(1,"a");
    //search(1,"ax");


    //dlt("orin");

    update(1,"ax", "Integer");
    update(1,"ab", "Integer");
    update(1,"ab", "Char");
    showALl();



}





void  insert(int k, string name, string type)
{


    //int key = hashKey(name);
   int key=k;



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
        i++;
    }

    return k % 50;
}






void  dlt(int k,string name){

    //int  key = hashKey(name);

    int key=k;

    node *temp,*root;
    root = link[key];



    if (root == NULL) {
        cout << "No " << name << "found" << endl;
    }
    else if(link[key]->name == name){
        link[key] = link[key]->next;

    }

    else{


        while(root->name != name){


            temp = root;

            if(root->next == NULL)
                break;

            root = root->next;

        }

        temp->next = root->next;


    }

}


void showALl(){

    for (int i = 0; i<50; ++i) {

        if (link[i] != NULL){

            node *temp = link[i];
            cout<<"key("<<i<<"): ";
            while(temp != NULL)
            {

                cout<<temp->name<<":"<<temp->type<<" ";


                temp = temp->next;

            }

            cout<<endl;

        }


    }
}


void search(int k, string name){

    int key = hashKey(name);
    key = k;



        if (link[key] == NULL) {
            cout << "No " << name << " found" << endl;
        }
        else{

            node *temp = link[key];


            cout<<"key("<<key<<"): ";
            while(temp != NULL)
            {

                if(temp->name == name){
                    cout<<"Name: "<<temp->name<<" Type: "<<temp->type<<endl;

                    return;
                }

                temp = temp->next;

            }

            cout << "No " << name << " found" << endl;
            cout<<endl;

        }

}

void  update(int k, string name, string updateType){


    int key = hashKey(name);
    key = k;



    if (link[key] == NULL) {
        cout << "No " << name << " found" << endl;
    }
    else{

        node *temp = link[key];


        cout<<"key("<<key<<"): ";
        while(temp != NULL)
        {

            if(temp->name == name){
                //cout<<"Name: "<<temp->name<<" Type: "<<temp->type<<endl;
                temp->type = updateType;

                return;
            }

            temp = temp->next;

        }

        cout << "No " << name << " found" << endl;
        cout<<endl;

    }

}







void stringSplit(string nameType){


    int len = nameType.length();

    int coma =  nameType.find(',');
    iname = nameType.substr(0,coma);
    itype = nameType.substr(coma+1,len);

}

void newLine(){

    cout<<endl;
}
