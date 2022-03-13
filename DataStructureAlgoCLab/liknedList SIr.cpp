#include<stdio.h>
struct list {
        int data;
        struct list *next;
};

typedef struct list node;

node *copyHead;

void display(node *start)
{
    node *temp;
    temp=start;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}




int main()
{
    node *start=NULL,*temp, *head, *temp1, *prev, *copyHead;
    int ans;
    printf("Do You want to create node:");
    scanf("%d",&ans);
    while(ans==1)
    {
        if(start==NULL)
        {
            start=new node();

            printf("Enter your Data:");
            scanf("%d",&start->data);
            start->next=NULL;
            prev=start;
        }
        else
        {
            temp=new node();
            printf("Enter your Data:");
            scanf("%d",&temp->data);
            temp->next=NULL;
            prev->next=temp;
            prev=temp;

        }

        printf("Do You want to create node:");
        scanf("%d",&ans);
    }

    head = NULL;
    temp = start;

/*
    while(temp !=NULL){

        if(head == NULL){

            head = new node();
            head->next = NULL;
            head->data = temp->data;

        }

        else{
            temp1 = new node();
            temp1->next = head;
            temp1->data = temp->data;
            head->next= temp1;
        }


    }
*/



    display(start);
    display(copyHead);



return 0;

}