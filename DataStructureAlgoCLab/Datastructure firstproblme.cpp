#include <iostream>
#include <cstdio>

using namespace std;


struct polynomial{

    int data;
    int data2;
    struct polynomial *next;

};
typedef struct polynomial node;

void insert(node *head[]){

        node *temp, *prev;

        string str;
        int len;


    for(int i=0; i<2; i++){
        head[i] = new node();
        prev= head[i];
        cin>>str;

        len = str.size();
        str[len]='0';

        for(int j=0; j<len+1; j+=2){

            temp = new node();
            temp->data = (int) str[j]-'0';
            temp->data2 = (int) str[j+1]-'0';
            temp->next=NULL;
            prev->next = temp;
            prev=temp;

        }

    }

}


void sumPolynomial(node *head[]){

    node *temp, *temp2;
    temp=head[0]->next;

    while(temp!=NULL){

        temp2=head[1]->next;

        while(temp2 !=NULL){

            if(temp->data2 == temp2->data2){
                temp->data+=temp2->data;
                break;
            }

        temp2=temp2->next;

        }
       // printf("%d%d ", temp->data,temp->data2);

        temp=temp->next;

    }
}

void display(node *head[]){

    node *temp;

    temp=head[0]->next;

    while(temp !=NULL){

        if(temp->data2 == 0)
            printf("%d",temp->data);
        else
            printf("%dx^%d+",temp->data, temp->data2);
        temp=temp->next;
    }

}

int main(int argc, char **argv)
{

    node *head[2];
    node *sum;

    //head= new node();

     insert(head);

    sumPolynomial(head);

    display(head);
   // printf("%d", head[0]->data);



    return 0;
}