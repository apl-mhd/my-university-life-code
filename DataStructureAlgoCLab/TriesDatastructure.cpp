#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <functional>
#include <queue>
#include <utility>
#include <list>
#include <climits>
#include <string>
#include <cstring>
#define P printf("\n");

using namespace std;

struct node{
	
	int id=10;
	bool mark;
	
	struct node *next[26];
	
	node(){
		
		mark=false;
		for(int i=0; i<25; i++)
			next[i]=NULL;
		
		}
		
	};
	
	
	typedef node node;

	
	void insert(node *cur, string word){
		
		int len = word.length();
		
		for(int i=0; i<len; i++){
			
			int id = word[i] -'a';
			
			if(cur->next[id]==NULL){
				
				cur->next[id] = new node();
				
				}
			cur = cur->next[id];
			
			}
			
			cur->mark=1;
		
		
		}
		
bool check(node *temp, string word){
	
	int len = word.size();
	
	for(int i=0; i<len; i++){
		
		int id= word[i]-'a';
		
		
		if(temp->next[id]== NULL){
	
			return false;
		}
		temp=temp->next[id];
		
					
	}
		
	return true;
	
	}
	
int main(int argc, char **argv)
{
	
	node *root = new node();
	
	node *cur = root;
	
	string word;
	
	cin>>word;
	

	
	insert(cur,word);
	
	cout<<check(root,"bangladesh");
	
	
	
	
	
	
	
	return 0;
}