#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
	struct node* prev;
};

struct node* start=NULL;
struct node* temp;

void sonaekle(int x){
	
		
	if(start==NULL){
		
		struct node* eklenecek=(struct node* )malloc(sizeof(struct node));
			
		eklenecek->data=x;
		eklenecek->next=NULL;
		eklenecek->prev=NULL;
		start=eklenecek;
	}
	
	else{
		struct node* eklenecek2=(struct node* )malloc(sizeof(struct node));
		
		temp=start;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=eklenecek2;
		eklenecek2->prev=temp;
		eklenecek2->data=x;
		eklenecek2->next=NULL;
		
		
	}
}

void basaekle(int x){
	
	if(start==NULL){
		struct node* eklenecekiki=(struct node* )malloc(sizeof(struct node));
	eklenecekiki->prev=NULL;
	eklenecekiki->data=x;
	eklenecekiki->next=NULL;
	start=eklenecekiki;
	}
	else{
	
	struct node* eklenecek=(struct node* )malloc(sizeof(struct node));
	
	eklenecek->prev=NULL;
	eklenecek->data=x;
	eklenecek->next=start;
	start->prev=eklenecek;
	start=eklenecek;
}
}

void arayaekle(int x,int y){
	
	struct node* eklenecek=(struct node* )malloc(sizeof(struct node));
	struct node* gecici;
	if(start==NULL){
		basaekle(y);
	}
	else
	if(start->data==x){
		basaekle(y);
	}
	else{
	temp=start;
	while(temp->next->data!=x){
		temp=temp->next;
	}
	gecici=temp->next;
	temp->next=eklenecek;
	eklenecek->data=y;
	eklenecek->next=gecici;
	eklenecek->prev=temp;
}
}

void bastansil(){
	struct node* gecici;
	gecici=start;
	start=start->next;
	free(gecici);
	start->prev=NULL;
}

void sondansil(){
	if(start->next==NULL)
	bastansil();
	else{
		struct node* gecici;
		temp=start;
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		gecici=temp;
		free(temp->next);
		gecici->next=NULL;
		gecici->prev=temp;
		
	}
}

void aradansil(int x){
	
	if(start->data==x)
	bastansil();
	else{
		struct node* gecici;
		struct node* gecici2;
		temp=start;
		while(temp->next->data!=x)//1-2-3-4-NULL
		temp=temp->next;
		if(temp->next->next==NULL)
		sondansil();
		else
		{
			gecici=temp;
			gecici2=temp->next->next;
			free(temp->next);
			gecici->next=gecici2;
			
			}	
	}
	
}

void yazdir(){
	temp=start;
	
	if(start->next==NULL){
		printf("NULL->%d->NULL",start->data);
	}
	
	else{
		printf("NULL<-%d->",temp->data);
	temp=temp->next;
	while(temp->next!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("%d->NULL",temp->data);
	}
}

int main(int argc, char *argv[]) {
	
	int secim,sayi,secimiki,a=1;
	
	while(a==1){
	
	printf("\n\n\t1-)BASA EKLE:");
	printf("\n\t2-)ARAYA EKLE: ");
	printf("\n\t3-)SONA EKLE: ");
	printf("\n\t4-)BASTAN SIL:");
	printf("\n\t5-)ARADAN SIL:");
	printf("\n\t6-)SONDAN SIL:");
	printf("\n\t7-)KONTROL");
	printf("\n\t8-)CIKIS YAP: ");

	printf("\n\n\tHANGI ISLEMI YAPMAK ISTERSINIZ: ");
	scanf("%d",&secim);
	printf("\n");
	switch(secim){
		
		case 1:
			printf("\nEKLENECEK SAYÝ: ");	
			scanf("%d",&sayi);
			basaekle(sayi);
			printf("\n\n");
			yazdir();
			break;
		case 2:
			printf("\nHANGI SAYIDAN ONCE: ");	
			scanf("%d",&secimiki);
			printf("\nEKLENECEK SAYI: ");
			scanf("%d",&sayi);
			arayaekle(secimiki,sayi);
			printf("\n");
			yazdir();
			break; 
		case 3:
			printf("\nEKLENECEK SAYÝ: ");	
			scanf("%d",&sayi);
			sonaekle(sayi);
			printf("\n\n");
			yazdir();
			break;
		case 4:
			bastansil();
			yazdir();
			break;
		case 5:
			printf("SILINECEK SAYI: ");
			scanf("%d",&sayi);
			aradansil(sayi);
			yazdir();
			break;
		case 6:
			sondansil();
			yazdir();
			break;
		case 7:
			temp=start;
			if(start->prev==NULL)
			printf("LISTENIN ONCESI NULL'DUR\n");
			else printf("HATA VAR");
			if(start->next==NULL)
			printf("LISTENIN DEVAMI YOKTUR");
			else printf("LISTENIN DEVAMI VARDIR");
			while(temp->next!=NULL)
			{
				printf("\n%d",temp->next->prev->data);
				temp=temp->next;
			}
			break;
		
		case 8:
			a=2;
			break;			
		
	}
	
}
	printf("\n\n\t CIKIS YAPTINIZ TESEKKURLER...");
	getchar();
	getchar();
	
	return 0;
}
