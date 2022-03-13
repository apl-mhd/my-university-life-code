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

    node *temp, *prev;
    for (int i=0; i<5; i++){
        if(head == NULL){

            head = new node();
            scanf("%d",&head->data);
            head->next = NULL;
            prev = head;
        }
        else{

            temp = new node();
            scanf("%d",&temp->data);
            temp->next = NULL;
            prev->next = temp;
            prev =temp;
        }


    }

    return head;
}

void boubleSort(node *head){

    int i,n,j,x;
    n=5;
    node *temp;

    for(i=1; i<n; i++){
           temp = head;
        for(j=0; j<n-i; j++){

            if(temp->data > temp->next->data){

                x = temp->data;
                temp->data = temp->next->data;
                temp->next->data = x;
                temp=temp->next;
            }
        }
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
  node *head, *head2;
    head =NULL;
    head2=NULL;
 head = insert(head);

display(head);

cout<<endl<<"After sorting"<<endl;
boubleSort(head);
display(head);

cout<<endl;

    return 0;
}