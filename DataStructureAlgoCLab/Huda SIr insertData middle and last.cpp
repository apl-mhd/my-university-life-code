#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct list{

    int data;
    struct list *next;
};

typedef list node;

node *insert(node *head){

    node *temp;
    for (int i=10; i<=100; i+=10){
        if(head == NULL){

            head = new node();
            head->data =i;
            head->next = NULL;
        }
        else{

            temp = new node();
            temp->data=i;
            temp->next = head;
            head = temp;
        }


    }

    return head;
}

node  *insertLast(node *head, int item){

    node *temp, *pushData;
    temp = head;

    if(head == NULL){

        head = new node();
        head->data = item;
        head->next = NULL;
        return head;
    }

    if(item >temp->data){

        pushData = new node();
        pushData->data=item;
        pushData->next = head;
        head = pushData;
        return head;
    }

else{
    while( temp->next !=NULL && temp->next->data >=item  ){

        temp = temp->next;

    }



    pushData = new node();
    pushData->data = item;
    pushData->next = temp->next;
    temp->next = pushData;
   // temp->next->data =10;

    //printf("\n%d", temp->data);
    return head;
    }
}
void display(node *head){

  //  node *temp;
   // temp = head;
    while(head != NULL){


        printf("%d ", head->data);
        head = head->next;
    }

}


int main()
{
  node *head;
    head =NULL;
 head = insert(head);

display(head);
head = insertLast(head,2000);
cout<<"after insert data"<<endl;
display(head);
 // printf("%d\n", head->data);
    return 0;
}