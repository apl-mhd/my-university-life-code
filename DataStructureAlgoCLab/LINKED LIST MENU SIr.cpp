
#include<stdio.h>
struct list
{
    int data;
    struct list *next;
};

typedef struct list node;

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
node *insertion(node *start,int item)
{
    node *temp;
    if(start==NULL)
    {
        start=new node();
        start->next=NULL;
        start->data=item;
    }
    else if(start->data>=item)
    {
        temp=new node();
        temp->data=item;
        temp->next = start;
        start = temp;

    }
    
    

return start;
}
 void showMenu()
 {
     printf("\n1.Insert\n2.Delete\n3.Exit");

 }

int main()
{
    node *start=NULL;
    int choise,item,i=1;
    do{
        showMenu();
        printf("\n");
        printf("Enter Choise:");
        scanf("%d",&choise);
        if(choise==1)
        {
            printf("Enter Item:");
            scanf("%d",&item);
            start=insertion(start,item);
            display(start);


        }
        else if(choise==2)
        {

        }
        else
        {
            i=0;
        }
    }
    while(i);



   // display(start);
  return 0;

}