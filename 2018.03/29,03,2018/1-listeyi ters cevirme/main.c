#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;	
};

struct node* start=NULL;
struct node* temp=NULL;

void hazirdizi(){
	
	int i,a;
for(i=1;i<=5;i++){
	struct node* sonaeklenecek=(struct node*)malloc(sizeof(struct node));
	
	printf("%d.ELEMANI GIRINIZ: ",i);
	scanf("%d",&a);
	sonaeklenecek->data=a;
	sonaeklenecek->next=NULL;	
	
	if(start==NULL)
	start=sonaeklenecek;
	
else{
		temp=start;
		while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=sonaeklenecek;
	}
}

}

void yazdir(){
	
	temp=start;
	while(temp->next!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("%d->NULL",temp->data);
}

void terscevir(){
	
	struct node* gecici;
	struct node* son=NULL;
	
	temp=start;
	while(temp!=NULL){
		
		gecici=temp->next;
		temp->next=son;
		son=temp;
		temp=gecici;
	}
	start=son;
}


int main(int argc, char *argv[]) {
	hazirdizi();
	yazdir();
	printf("\n\n");
	terscevir();
	yazdir();
	return 0;
}
