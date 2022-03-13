#include <iostream>
#include <cstdio>
#include <ctype.h>
using namespace std;
struct counting{
 
    int count;
    int data;
 
    struct counting *next;
 
};
 
typedef counting node;
 
node  *charterInsert(node *head){
 
        node *temp, *prev ,*temp2;
 
        for(int i = 'a'; i<='z'; i++){
 
 
        if(head == NULL){
            head = new node();
            temp = new node();
 
            temp->data = i;
            temp->count=0;
            temp->next = NULL;
            head->next = temp;
            prev = temp;
 
    }
    else{
 
        temp2 = new node();
        temp2->data =i;
        temp2->count=0;
        temp2->next = NULL;
        prev->next = temp2;
 
        prev = temp2;
 
 
    }
 
 
 
}
 
  return head;
 
}
 
node *charCount(node *head){
	
 
        string str;
        int len;
        node *temp;
 
        cin>>str;
        len = str.size();
      
    for(int i=0; i<len; i++){
		
		//printf("%c",str[i]);
	
        temp =head->next;
			
        while(temp !=NULL){
				
			//printf(" %c ",temp->data);
			if(tolower(str[i]) == temp->data){
			temp->count++;
		}
            temp= temp->next;
        }
        
  
    }

 
return head;
}
 
 
 
 
void display(node *head){
    head=head->next;
    
    while(head!=NULL){
 
 
        printf("%c = %d\n",head->data, head->count);
 
        head = head->next;
    }
 
}
 
 
int main()
{
	
   node *head;
 
   head = NULL;


  head =  charterInsert(head);
 
	head = charCount(head);
 
 
  display(head);
 
    return 0;
}