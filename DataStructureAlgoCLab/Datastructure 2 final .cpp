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
 
        node *temp, *temp2,*temp3, *prev;
 
 
              temp2 = head;
 
        if(head == NULL){
            head= new node();
            temp= new node();
 
            head->next = temp;
            head->prev = NULL;
            temp->data = x;
            temp->next = NULL;
            temp->prev = head;
 
            printf("INSERT after dummy node\n");
 
        return head;
 
        }
 
 
        temp2=head->next;
        while(temp2->data != y  && temp2->next !=NULL)
 
                temp2= temp2->next;
 
         if(temp2->data == y &&temp2->next == NULL){
 
            temp3 = new node();
 
            temp3->data = x;
            temp3->next = NULL;
            temp2->next=temp3;
            temp3->prev = temp2;
 
            printf("INSERT after %d \n",y);
 
            return head;
        }
 
        else  if(temp2->next == NULL){
                //printf("orko %d\n",head->next->data);
 
                temp3 = new node();
                temp3->data = x;
                temp3->next= head->next;
                head->next = temp3;
                temp3->prev = head;
 
                temp3->next->prev = temp3;
                printf("INSERT after dummy node\n");
 
                    return head;
 
        }
 
        else if(temp2->data == y){
                temp3 = new node();
 
                temp3->data = x;
                temp3->next=temp2->next;
                temp3->next->prev = temp3;
                temp2->next=temp3;
                temp3->prev = temp;
 
            printf("INSERT after %d \n",y);
 
 
            return head;
        }
 
 
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
 
 
int main(int argc, char **argv)
{
 
 
    int flag=1;
    int y, x,del, value;
    char function[20];
 
    node *head;
 
    head = NULL;
 
 
 
    while(flag){
 
        scanf("%s",function);
 
        if(strcmp(function, "ins")==0){
 
 
                scanf("%d%d", &y,&x);
 
                 head= Insert(head,y,x);
 
 
            }
 
 
 
        if(strcmp(function, "del")==0){
 
            cin>>del;
            head = delItem(head, del);
 
            }
 
        if(strcmp(function, "sch")==0){
 
            cin>>value;
            searchData(head,value);
 
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