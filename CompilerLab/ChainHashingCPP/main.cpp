#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <climits>
using namespace std;

struct  SymbolInfo{

    string name;
    string type;
    SymbolInfo  *next;

};

typedef  SymbolInfo node;

int MAX = 50;

string inameType;
string iname="";
string itype="";

node *SymbolTable[50];

void init(){

    for (int i = 0; i <MAX; ++i) {

        //SymbolTable[i] = new node;
        SymbolTable[i] = NULL;
    }
}



int  hashKey(string name);
void  insert();
void  dlt();
void  search();
void  update();
void showALl();
int stringSplit(string nameType);
bool emptyOrNot();
bool nameEmpty( string nm);
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
        cout<<"Select option from menu :"<<endl;

        string n;
        cin>>n;

        if(n == "1" ){

            insert();

        }

        else if(n == "2"){

            search();

        }
        else if(n == "3"){

            dlt();

        }
        else if(n == "4"){

            showALl();


        }
        else if(n == "5"){
            update();

        }
        else if (n == "6"){

            exit(0);


        }
        else{
            cout<<"Invalid input, enter again \n";
        }

    }


}


int main() {


    init();
    menubar();


}





void  insert() {


    cout << "****Insert****\n";
    cout << "Enter Name,Type: \n";
    cin >> inameType;


    int count = stringSplit(inameType);

    int len = inameType.length();  //string length
    int comma = inameType.find(',');  //find comma ',' index other it return -1


    if (count == 0) {  // id donot have any comma then return

        cout << "comma separator not found, enter again : " << endl;

        return;


    } else if (count > 1) {

        cout << "More than one comma found, enter again : " << endl;

        return;

    } else {

        iname = inameType.substr(0, comma);
        itype = inameType.substr(comma + 1, len);

        if(iname == itype){

            cout<<"Name and Type can not be same\n"<<endl;
            return;

        }




    int key = hashKey(iname);


    node *temp = new node();
    node *root;

    if (SymbolTable[key] == NULL) { // if SymbolTable[key] == Null

        temp->name = iname;
        temp->type = itype;
        temp->next = NULL;   //assign next  == null
        SymbolTable[key] = temp;   //assign SymbolTable[key] = newly crated node;

        cout <<"hashkey(" <<key <<") -> " << iname<< ":"<<itype<<" insert successfully"<<endl;

    } else {                         //if not SymbolTable[key] == null

        temp->name = iname;
        temp->type = itype;
        temp->next = NULL;

        root = SymbolTable[key];         //store SymbolTable[key] starting location

        //  cout<<root<<endl;


        if (SymbolTable[key]->name == iname) {               //if start in SymbolTable[key] == iname then return
            cout <<"'"<< iname << "' Already exists !" << endl;
            return;
        }

        while (root->next != NULL) {      //iterate until last node->next !=null

            root = root->next;           //like root++

            if (root->name == iname) {    //if already exists then return from loop;
                cout <<"'"<< iname << "' Already exists !" << endl;
                return;
            }

        }

        root->next = temp;   //if no name found then temp assin to last node->next = temp;
        cout <<"hashkey(" <<key <<") -> " << iname<< ":"<<itype<<" insert successfully"<<endl;

    }

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

    if(emptyOrNot() == false){
        cout<<"List is empty"<<endl<<endl;
        return;
    }

    cout<<"****Delete****\n";
    cout<<"Enter Name: \n";
    cin>>iname;

    int  key = hashKey(iname);  //iname return hashkey


    node *temp,*root;
    root = SymbolTable[key];

    if (root == NULL) {   //if SymbolTable[key] == null then return
        cout  << iname << "' Not Found" << endl;
    }
    else if(SymbolTable[key]->name == iname){  //if at first node name found SymbolTable[key] = SymbolTable[key]->next
        SymbolTable[key] = SymbolTable[key]->next;
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


    if(emptyOrNot() == false){

        cout<<"List is empty"<<endl<<endl;

        return;
    }

    cout<<"****Show All****\n";



    for (int i = 0; i<MAX; ++i) {  //this is simple

        if (SymbolTable[i] != NULL){   //if SymbolTable[key] == null then exit from if condition

            node *temp = SymbolTable[i];
            cout<<"keyIndex("<<i<<")-> ";
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


    if(emptyOrNot() == false){
        cout<<"List is empty"<<endl<<endl;
        return;
    }

    cout<<"****Search****\n";
    cout<<"Enter Name: \n";
    cin>>iname;

    int key = hashKey(iname);


    cout<<"search result :"<<endl;

        if (SymbolTable[key] == NULL) {
            cout << " '" << iname << "' not found" << endl;
        }
        else{

            node *temp = SymbolTable[key];

            cout<<"hashKey("<<key<<"): ";
            while(temp != NULL)
            {

                if(temp->name == iname){
                    cout<<"Name: "<<temp->name<<" Type: "<<temp->type<<endl;

                    return;
                }

                temp = temp->next;

            }

            cout << " '" << iname << "' not found" << endl;

            cout<<endl;

        }

}

void  update(){


    if(emptyOrNot() == false){
        cout<<"List is empty"<<endl<<endl;
        return;
    }


    cout<<"****Update****\n";
    cout<<"Enter Name: \n";
    cin>>iname;



    cout<<"Enter UpdateType: \n";
    cin>>itype;



    int key = hashKey(iname);



    if (SymbolTable[key] == NULL) {    //if SymbolTable[key] == empty then return from this
        cout << " '" << iname << "' not found" << endl;
        return;
    }
    else{

        node *temp = SymbolTable[key];

        cout<<"key("<<key<<"): "<<endl;
        while(temp != NULL)
        {

            if(temp->name == iname){  //if name found then assign type=itype and return from loop
                cout<<"Name: "<<temp->name<<" Type: "<<itype<<" Updated Successfully "<<endl;
                temp->type = itype;

                return;
            }

            temp = temp->next; //temp++;

        }

        cout << " '" << iname << "' not found" << endl;

        cout<<endl;

    }

}

int stringSplit(string nameType){

    int len = nameType.length();  //string length
    int comma =  nameType.find(',');  //find comma ',' index other it return -1
    int count = 0;

    for(int i=0; i<len; i++){

        if(nameType[i] == ',')
            count++;

    }
    return  count;

}

void newLine(){

    cout<<endl;
}

bool emptyOrNot(){

    for (int i = 0; i <MAX ; ++i) {

        if(SymbolTable[i] != NULL)
            return true;

    }
    return  false;
}

bool nameEmpty( string nm){

    cout<<nm;

    for (int i = 0; i <MAX ; ++i) {
        if(SymbolTable[i]->name == nm)
            return true;

    }

    return false;


}
