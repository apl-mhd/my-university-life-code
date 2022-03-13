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
    for (int i=1; i<5; i++){
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

void insertLast(node *head){

    node *temp, *pushData;
    temp = head;

    while(temp->next != NULL){

        temp = temp->next;
    }

    pushData = new node();
    pushData->data = 10;
    pushData->next = temp->next;
    temp->next = pushData;
   // temp->next->data =10;

    //printf("\n%d", temp->data);
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
insertLast(head);
cout<<endl;
display(head);
 // printf("%d\n", head->data);
    return 0;
}