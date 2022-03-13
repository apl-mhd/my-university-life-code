#include <stdio.h>
#include <stdlib.h>


struct list{
    int data;
    struct list *next;

};

typedef struct list node;

int main()
{

   node *start, *temp, *prev, *temp1, *head;
   start = new node();

   start->data = 10;

   temp = new node();

   temp->data = 20;
   start->next = temp;

   temp = new node();
   start->next->next = temp;
   start->next->next->data = 30;
    start->next->next->next = start;
   // printf("%d",start->next->next->next->data);

   // head = new node();

  //  head->next = start->next->next;
   // head->next = start;
   // start = head();

  printf("%d",start->data);




    return 0;
}