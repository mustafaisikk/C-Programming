#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node* start=NULL;
struct node* temp=NULL;

void sonaekle(int veri)
{
	struct node* eklenecek=(struct node*)malloc(sizeof(struct node));
	
	eklenecek->data=veri;
	eklenecek->next=NULL;

	if(start==NULL)
	start=eklenecek;
	
	else
	{
		temp=start;
		
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=eklenecek;
	}
	
}

void yazdir(){
	temp=start;
	
	while(temp->next!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("%d->NULL\n",temp->data);
}

int main(int argc, char *argv[]) {
	
	int a;
	
	printf(" \n›LK SAYIYI G›R›N›Z: (CIKMAK ›C›N '00' G›R›N›Z)");
	scanf("%d",&a);
		printf("\n");

	while(a != 00){
	sonaekle(a);
	yazdir(); 
	printf(" \nSONA EKLENECEK SAYIYI G›R›N›Z: (CIKMAK ›C›N '00' G›R›N›Z)");
	scanf("%d",&a);
	printf("\n");

	
}
	
printf("\n\n\nCIKIS YAPTINIZ TESEKKURLER... ");
		getchar();
		getchar();
	return 0;
}
