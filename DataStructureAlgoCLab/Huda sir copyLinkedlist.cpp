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
node *copyList(node *head, node *head2){

    node *temp, *temp2;

    temp = head;

    while(temp !=NULL){

        if(head2 == NULL){
            head2 = new node();
            head2->data = temp->data;
        }

        else{

            temp2 = new node();
            temp2->data = temp->data;
            temp2->next = head2;
            head2=temp2;
        }

        temp=temp->next;
    }


    return head2;
}

int main()
{
  node *head, *head2;
    head =NULL;
    head2=NULL;
 head = insert(head);

display(head);
head = insertLast(head,2000);
cout<<endl<<"after insert data"<<endl<<endl;
display(head);
cout<<endl<<endl<<"after copy data"<<endl<<endl;
head2 = copyList(head, head2);
display(head2);
cout<<endl;
 // printf("%d\n", head->data);
    return 0;
}