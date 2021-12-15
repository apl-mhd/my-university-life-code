#include <iostream>
#include <stdio.h>
using namespace std;

struct list{
    int data;

    struct list *next;

};
typedef struct list node;

node *Insert(node *head, int n){

        node *temp, *prev;

        for(int i=1; i<=n; i++){

            if(head == NULL){

                head = new node();
                head->data = i;
                head->next = NULL;
                prev = head;
            }

            else{

                temp = new node();
                temp->data = i;
                temp->next = prev->next;
                prev->next = temp;
                prev = temp;


            }
    }
return head;
}

void Display(node *head, int n){

        int len,count =0, flag=0;;

            if(n ==1){
                printf("sublist 1:");
                printf("%d\n", head->data);

                return;
            }

        if(n%2 == 1)
            len = (n/2)+1;
        else
            len = n/2;

        while(head != NULL){


            if(flag == 0){
                 printf("Sublist 1: ");
                 flag++;
            }
            if(count == len){
                printf("\nSublist 2: ");
                cout<<endl;
            }
            printf("%d ", head->data);
            count++;
            head = head->next;


        }

}

node *DeletHead(node *head){

    node *prev;
        while(head != NULL){

            prev = head;
            delete prev;

            head= head->next;


        }

return head;
}

int main()
{

    node *head;
    head = NULL;

    int n;
    cout<<"No of element\n"<<endl;
    cin>>n;

    head= Insert(head , n);

    Display(head, n);

    head = DeletHead(head);

   // printf("%d", head);



    return 0;
}