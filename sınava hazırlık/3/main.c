#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* sol;
	struct node* sag;
};
struct node* start;

struct node* dugumolustur(int x){
	struct node* temp=malloc(sizeof(struct node));
	temp->data=x;
	temp->sol=NULL;
	temp->sag=NULL;
	
	if(start==NULL)
	start=temp;
	else
	return temp;
}
void ortakok(struct node* x){
	if(x!=NULL){
		ortakok(x->sol);
		printf("%d\n",x->data);
		ortakok(x->sag);
	}
}
struct node* ekle(struct node* x,int y){
	
	if(x==NULL)
	dugumolustur(y);
	else if(y>=x->data)
		x->sag=ekle(x->sag,y);
	else if(y<x->data)
		x->sol=ekle(x->sol,y);
}


int main(int argc, char *argv[]) {
	int i;
	for(i=1;i<10;i++){
		ekle(start,i);
	}
	ortakok(start);
	return 0;
}
