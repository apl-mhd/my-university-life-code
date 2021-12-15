#include <cstring>
#include <iostream>
#include <cstdio>
using namespace std;

struct list{

        int data;
        struct list *next;
        struct list *prev;

};

typedef struct list node;

node *Insert(node *head, int y,int x){

        node *temp, *temp2,*temp3, *prev, *insertData;

            temp = head;

            while(temp->next !=NULL && temp->data != x)
                temp = temp->next;

            if(temp->next == NULL){
              //  printf("ork\n");
                insertData = new node();
                insertData->data = x;
                insertData->next=temp->next;
                insertData->prev= temp;
                temp->next=insertData;
            }


            printf("%d\n", insertData->next);

        return head;
}


void shw(node *head){

    if(head->next == NULL){
        printf("no data found");
        return;
    }

    while(head->next !=NULL){

        printf("%d ", head->next->data);
        head= head->next;
    }
    cout<<endl;
}
/*
node *delItem(node *head, int value){

            node *temp;
            temp = head->next;

        while(temp->data !=value && temp->next !=NULL)
                temp = temp->next;



        if(temp->data == value &&temp->next ==NULL){

            temp->prev->next = NULL;

            delete temp;
           return head;
        }

        else if(temp->data == value){

                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;

                printf("Node with key value %d is DELETED\n", value);

                delete temp;

            return head;

        }

        else{

            printf("delete not possible \n");
            return head;
        }
}

void searchData(node *head, int value){

        node *temp;
        temp = head->next;
        while(temp->next !=NULL && temp->data == value)
            temp  = temp->next;
        if(temp->data = value)
            printf("Node with key value %d is FOUNDED\n",temp->data);
        else
        {
             printf("Node found\n",temp->data);
        }
}
*/

int main(int argc, char **argv)
{


    int flag=1;
    int y, x,del, value;
    char function[20];

    node *head;

    head = new node();
    head->next=NULL;
    head->prev=NULL;


    while(flag){

        scanf("%s",function);

        if(strcmp(function, "ins")==0){


                scanf("%d%d", &y,&x);

                 head= Insert(head,y,x);


            }



        if(strcmp(function, "del")==0){

            cin>>del;
           // head = delItem(head, del);

            }

        if(strcmp(function, "sch")==0){

            cin>>value;
           // searchData(head,value);

        }

         if(strcmp(function, "shw")==0){

                shw(head);


            }


        if(strcmp(function, "ext")==0){

            flag =0;

            }


        }

    return 0;
}