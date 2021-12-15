#include <iostream>
#include <cstdio>
using namespace std;

struct mirror{
	
	char data;
	struct mirror *next;
	
};
typedef struct mirror node;

	


void inputdata(node *head[], int row, int col){
	
	int  i, j;
	node *temp;
	
	
	
	//cout<<row<<col<<endl;
	
	for(i=0; i<row; i++){
		
		
		for(j=0; j<col; j++){
			
			if(head[i] == NULL){
				
				head[i] = new node();
				cin>>head[i]->data;
				//head[i]->data = j;
				head[i]->next=NULL;
				
				}
			else{
				
				temp = new node();
				cin>>temp->data;
				//temp->data = j;
				temp->next= head[i];
				head[i] = temp;
				
				}
			
		
		}
		
	
	}
	

}

void display(node *head[], int row){
	
		node *temp;
		
		int i;
		
	for(i=0; i<row; i++){
		
		
		temp=head[i];
		
		while(temp !=NULL){
				
			printf("%c", temp->data);
			
			temp=temp->next;
		}
		cout<<endl;
	
	}
}




int main(int argc, char **argv)
{
	
	node *head[100]={NULL};
	
	int row, col;
	cout<<"Enter row and column"<<endl;
	cin>>row>>col;
	inputdata(head, row , col);
	cout<<endl<<endl;
	 display(head, row);
	
	
	return 0;
}