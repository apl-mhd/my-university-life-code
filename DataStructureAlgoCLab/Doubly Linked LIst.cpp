#include <iostream>
#include <cstdio>
using namespace std;


struct list{
   int data;
   struct list *next;
    struct list *prev;
};

typedef struct list node;


node *insertData(node *head){

        node *temp;

    for(int i=0; i<5; i++){
        if(head ==NULL){

            head = new node();
            head->data = i;
            head->prev=NULL;
            head->next = NULL;
        }
        else{

            temp = new node();

            temp->data = i;
            temp->next = head;
            head->prev=temp;
            temp->prev = NULL;
            head = temp;


        }

    }

   return head;
}

void display(node *head){

    while(head !=NULL){

        printf("%d ", head->data);

        head=head->next;
    }


}

int main()
{
    node *head;

head = NULL;

head = insertData(head);

//printf("%d ", head->next->prev->data);

display(head);

    return 0;
}