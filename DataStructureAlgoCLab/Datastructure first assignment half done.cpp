#include <iostream>
#include <cstdio>
using namespace std;
 
 
struct list{
   int data;
 
   struct list *lNext;
   struct list *rNext;
   struct list *tNext;
   struct list *bNext;
 
};
 
typedef struct list node;
 
 
node *insertData(node *head, int sum[]){
 
    node *temp,*temp2, *rPrev, *lPrev, *tPrev, *bPrev;
	int x;
    rPrev = head;
    lPrev = head;
    tPrev = head;
    bPrev = head;
	int size;
	cin>>size;
 
for(int i=0; i<size; i++){
 
        temp = new node();
 
    char check;
    cin>>check;
    
    if(check== 'R'){
	
	cin>>x;
	sum[0]+=x;
    temp->data = x;
    temp->rNext= NULL;
 
    rPrev->rNext = temp;
    rPrev = temp;
	 	
 
    }
 
    if(check == 'L'){
 
	cin>>x;
	sum[1]+=x;
    temp->data = x;
    temp->rNext= NULL;
 
    lPrev->lNext = temp;
    lPrev = temp;
 
    }
 
 
      if(check== 'T'){
		  
	cin>>x;
	sum[2]+=x;
    temp->data = x;
    temp->tNext= NULL;
 
    tPrev->tNext = temp;
    tPrev = temp;
 
    }
 
    if(check == 'B'){
 
	cin>>x;
	sum[3]+=x;
    temp->data = i;
    temp->bNext= NULL;
 
    bPrev->bNext = temp;
    bPrev = temp;
 
    }
 
 
 
}
   return head;
}
 
void display(node *head){
 
    node *temp;
    temp = head;
    while(temp->rNext !=NULL){
 
        printf("%d ", temp->rNext->data);
        temp = temp->rNext;
    }
    cout<<endl;
    temp = head;
    while(temp->lNext !=NULL){
 
        printf("%d ", temp->lNext->data);
        temp = temp->lNext;
    }
 
     cout<<endl;
     temp = head;
    while(temp->tNext !=NULL){
 
        printf("%d ", temp->tNext->data);
        temp = temp->tNext;
    }
    cout<<endl;
    temp = head;
    while(temp->bNext !=NULL){
 
        printf("%d ", temp->bNext->data);
        temp = temp->bNext;
    }
 
 
 
}

void largeLink(int sum[]){
		
		
		int max=sum[0],address=0;
		for(int i=0; i<4; i++){
			
			if(max <sum[i]){
				max = sum[i];
			
				address =i;
			}
		}
	//printf("%d = %d", address,max);
		
	if(address == 0)
		printf("Right Link List Has Maximum Sum %d", max);
	
	if(address == 1)
		printf("Left Link List Has Maximum Sum %d", max);
	
	if(address == 2)
		printf("Top Link List Has Maximum Sum %d", max);
	
	if(address == 3)
		printf("Bottom Link List Has Maximum Sum %d", max);
	
}

 
int main()
{
    node *head, *temp, *temp2;
	
	int sum[4]={0}; /********************************************************** */
	                /* | left| |right|  |top | Bottom| */
	head = NULL;    /********************************************************** */
 
    head = new node();
    //head->data = 10;
 
    head = insertData(head, sum);
 
	largeLink(sum);
	//printf("%d %d %d %d",sum[0], sum[1], sum[2], sum[3]);
   //display(head);
 
 
 
    return 0;
}