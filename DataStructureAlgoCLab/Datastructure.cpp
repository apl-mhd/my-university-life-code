#include <iostream>
#include <cstdio>
using namespace std;


struct list{
   int lData;
   int rData;
   int tData;
   int bData;
   struct list *lNext;
   struct list *rNext;
   struct list *tnext;
   struct list *bNext;

};

typedef struct list node;


node *insertData(node *head){



   return head;
}

void display(node *head){



}

int main()
{
    node *head, *temp, *temp2;

    head = new node();


    temp = new node();
    temp->rData = 20;
    temp->rNext = NULL;

    temp2 = new node();

    temp2->rData = 10;
    temp2->rNext = temp;

    head->rNext = temp2;


    printf("%d ", head->rNext->rData);




    return 0;
}