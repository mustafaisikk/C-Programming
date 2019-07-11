#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* next;
};

struct node* start=NULL;
struct node* temp=NULL;

void basaekle(int veri){
	struct node* basaeklenecek=(struct node*)malloc(sizeof(struct node));
	
	basaeklenecek->data=veri;
	basaeklenecek->next=start;
	start=basaeklenecek;	
} 
void sonaekle(int veri){
	struct node* sonaeklenecek=(struct node*)malloc(sizeof(struct node));
	
	sonaeklenecek->data=veri;
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

void yazdir(){
	
	temp=start;
	while(temp->next!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("%d->NULL",temp->data);
	
}

void arayaekle(int x,int y){
	
	struct node *arayaeklenecek=(struct node*)malloc(sizeof(struct node));
	
	arayaeklenecek->data=y;
	temp=start;
	
	while(temp->next->data!=x){
		temp=temp->next;
	}
	
	struct node *gecici=(struct node*)malloc(sizeof(struct node));
	gecici=temp->next;
	temp->next=arayaeklenecek;
	arayaeklenecek->next=gecici;
}

int main(int argc, char *argv[]) {
	
	int sayi,secim,a=1,x,y;
	
	while(a==1){
	printf("\n\n\t1-)BASA EKLE: \n");
	printf("\t2-)SONA EKLE: \n");
	printf("\t3-)ARAYA EKLE: \n");
	printf("\t4-)CIKIS YAP: \n\n");
	printf("KULLANMAK ÝSTEDÝGÝNÝZ ÝSLEMÝ SECÝNÝZ: ");
	scanf("%d",&secim);
	switch(secim){
		case 1:
			printf("BASA EKLENECEK SAYIYI SECINIZ: ");
			scanf("%d",&sayi);
			printf("\n");
			basaekle(sayi);
			yazdir();
			break;
		case 2:
			printf("SONA EKLENECEK SAYIYI SECINIZ: ");
			scanf("%d",&sayi);
			printf("\n");
			sonaekle(sayi);
			yazdir();
			break;
		case 3:
			
			printf("\n");
			printf("HANGI SAYIDAN ONCE YAZILSIN: ");
			scanf("%d",&x);
			printf("HANGI SAYI YAZILSIN: ");
			scanf("%d",&y);
			arayaekle(x,y);
			yazdir();
			break;
			
		case 4:
			printf("\n\n\tCIKIS YAPTINIZ TESEKKURLER: ");
			a=2;
	}
	}
	
	getchar();
	getchar();	
	
	return 0;
}
