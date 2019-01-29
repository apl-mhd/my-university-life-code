#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <climits>
using namespace std;

struct  list{

    string name;
    string type;

    list  *next;

};

typedef  list node;

node *link[50];

string inameType;
string iname="";
string itype="";

void init(){

    for (int i = 0; i <50; ++i) {

        //link[i] = new node;
        link[i] = NULL;
    }
}



int  hashKey(string name);
void  insert();
void  dlt();
void  search();
void  update();
void showALl();
void stringSplit(string nameType);
void newLine();


void menubar(){

    bool decision = true;

    while(decision){

        cout<<"1. Insert :\n";
        cout<<"2. Search :\n";
        cout<<"3. Delete :\n";
        cout<<"4. Show :\n";
        cout<<"5. Update :\n";
        cout<<"6. exit :\n";
        cout<<"Enter :"<<endl;

        char n;
        cin>>n;

        if(n =='1' ){

            insert();

        }

        else if(n == '2'){

            search();

        }
        else if(n == '3'){

            dlt();

        }
        else if(n == '4'){

            showALl();


        }
        else if(n == '5'){
            update();

        }
        else if (n == '6'){

            return;


        }
        else{
            cout<<"Invalid input \n";
        }

    }


}


int main() {


    init();
    menubar();



    /*
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


    //dlt(0,"a");
   //search(1,"ax");

    update(0,"c", "Integer");
    //update(1,"ab", "Integer");
   // update(1,"ab", "Char");
    showALl();
*/
}





void  insert()
{


    cout<<"****Insert****\n";
    cout<<"Enter Name,Type: \n";
    cin>>inameType;


    stringSplit(inameType);


    int key = hashKey(iname);


    node *temp = new  node();
    node *root;

    if (link[key] == NULL){ // if link[key] == Null

        temp->name = iname;
        temp->type = itype;
        temp->next = NULL;   //assign next  == null
        link[key] = temp;   //assign link[key] = newly crated node;

    }

    else{                         //if not link[key] == null

        temp->name = iname;
        temp->type = itype;
        temp->next = NULL;

        root = link[key];         //store link[key] starting location

        //  cout<<root<<endl;


        if(link[key]->name == iname){               //if startin link[key] == iname then return
            cout<<iname<<" Already exists !"<<endl;
            return;
        }

        while(root->next != NULL){      //iterate until last node->next !=null

            root = root->next;           //like root++

            if(root->name == iname){    //if already exists then return from loop;
                cout<<iname<<" Already exists !"<<endl;
                return;
            }

        }

        root->next = temp;   //if no name found then temp assin to last node->next = temp;

    }

}


int hashKey(string key){

    int i=0;
    int k=0;

    while(key[i] !='\0'){      //iterate hole string
        k +=key[i];          //sumup asci value
        i++;
    }

    return k % 10;
}




void  dlt(){

    cout<<"****Delete****\n";
    cout<<"Enter Name: \n";
    cin>>iname;

    int  key = hashKey(iname);  //iname return hashkey


    node *temp,*root;
    root = link[key];

    if (root == NULL) {   //if link[key] == null then return
        cout << "No key = '" << iname << "' found" << endl;
    }
    else if(link[key]->name == iname){  //if at first node name found link[key] = link[key]->next
        link[key] = link[key]->next;
        cout << iname << " has successfully  delteted" << endl;

    }

    else{

        while(root->name != iname){  //iterate until name not found

            temp = root;  //store previous node addres, for join node
            if(root->next == NULL){    //last node->next ==null means no name found and return form loop

                cout << "No " << iname << "found" << endl;

                return;
            }

            root = root->next;
        }

        cout << iname << " has successfully  delteted" << endl;

        temp->next = root->next;  // like 1,2,3, are nodesl. I want to delete 2 so need to join 1->3 node
    }
}


void showALl(){

    cout<<"****Show All****\n";

    for (int i = 0; i<50; ++i) {  //this is simple

        if (link[i] != NULL){   //if link[key] == null then exit from if condition

            node *temp = link[i];
            cout<<"keyIndex("<<i<<"): ";
            while(temp != NULL)
            {
                cout<<temp->name<<":"<<temp->type<<", ";
                temp = temp->next;
            }
            cout<<endl;
        }



    }

    cout<<endl;
}


void search(){


    cout<<"****Search****\n";
    cout<<"Enter Name: \n";
    cin>>iname;

    int key = hashKey(iname);


    cout<<"search result :"<<endl;

        if (link[key] == NULL) {
            cout << "No " << iname << " found" << endl;
        }
        else{

            node *temp = link[key];

            cout<<"hashKey("<<key<<"): ";
            while(temp != NULL)
            {

                if(temp->name == iname){
                    cout<<"Name: "<<temp->name<<" Type: "<<temp->type<<endl;

                    return;
                }

                temp = temp->next;

            }

            cout << "No " << iname << " found" << endl;
            cout<<endl;

        }

}

void  update(){


    cout<<"****Update****\n";
    cout<<"Enter Name: \n";
    cin>>iname;

    cout<<"Enter UpdateType: \n";
    cin>>itype;



    int key = hashKey(iname);



    if (link[key] == NULL) {
        cout << "No " << iname << " found" << endl;
    }
    else{

        node *temp = link[key];

        cout<<"key("<<key<<"): "<<endl;
        while(temp != NULL)
        {

            if(temp->name == iname){  //if name found then assign type=itype and return from loop
                cout<<"Name: "<<temp->name<<" Type: "<<itype<<"Updated Successfully "<<endl;
                temp->type = itype;

                return;
            }

            temp = temp->next; //temp++;

        }

        cout << "No " << iname << " found" << endl;
        cout<<endl;

    }

}


void stringSplit(string nameType){


    int len = nameType.length();  //string length
    int comma =  nameType.find(',');  //find comma ',' index other it return -1

    if(comma < 0){  // id donot have any comma then return

        cout<<"comma separator not found, enter again : "<<endl;

        menubar();


    }
    else {

        iname = nameType.substr(0, comma);
        itype = nameType.substr(comma + 1, len);
    }

}

void newLine(){

    cout<<endl;
}
