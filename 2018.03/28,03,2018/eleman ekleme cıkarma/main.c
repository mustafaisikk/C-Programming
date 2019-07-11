#include <stdio.h>
#include <stdlib.h>

struct node{
	
	int data;
	struct node* next;
};

struct node* start=NULL;
struct node* temp=NULL;

void hazirdizi(){
	
	struct node* bir=(struct node* )malloc(sizeof(struct node));
	struct node* iki=(struct node* )malloc(sizeof(struct node));
	
	bir->data=1;
	bir->next=iki;
	iki->data=2;
	iki->next=NULL;
	
	start=bir;
}

void yazdir(){
	
	temp=start;
	
	while(temp->next!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("%d->NULL",temp->data);
}

void sonaekle(int x){
	
	struct node* sonaeklenecek=(struct node* )malloc(sizeof(struct node));
	
	sonaeklenecek->data=x;
	sonaeklenecek->next=NULL;
	
	temp=start;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=sonaeklenecek;
	
}

void basaekle(int x){
	
	struct node* basaeklenecek=(struct node* )malloc(sizeof(struct node));
	
	basaeklenecek->data=x;
	basaeklenecek->next=start;
	start=basaeklenecek;
}

void arayaekle(int x,int y){
	
	struct node* arayaeklenecek=(struct node* )malloc(sizeof(struct node));
	struct node* gecici=(struct node* )malloc(sizeof(struct node));
	
	arayaeklenecek->data=y;
	temp=start;
	while(temp->next->data!=x){
		temp=temp->next;
	}
	gecici=temp->next;
	temp->next=arayaeklenecek;
	arayaeklenecek->next=gecici;
	
}

void sondansil(){
	temp=start;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	free(temp->next);
	temp->next=NULL;
}

void bastansil(){
	
	struct node* gecici=NULL;
	
	gecici=start->next;
	free(start);
	start=gecici;
}

void aradansil(int x){
	
	if(start->data==x){
	
	bastansil(x);
	return 0;
}
	struct node* gecici=NULL;
	struct node* geciciiki=NULL;
	
	
	temp=start;
	while(temp->next->data!=x){
		temp=temp->next;
	}
	if(temp->next==NULL){
	sondansil(x);
	return 0;
}
	gecici=temp;
	geciciiki=temp->next->next;
	free(temp->next);
	gecici->next=geciciiki;
	
	//1-2-3-4-5-6
}

int main(int argc, char *argv[]) {
	int secim,islem,sonaeklenecek,basaeklenecek,konum,arayaeklenecek,aradansilinecek;
	
	hazirdizi();
	yazdir();
	printf("\n\n");
	printf("ÝSLEM YAPMAK ÝCÝN 1'I CIKIS ICIN 0'I GIRINIZ: ");
	scanf("%d",&secim);
	while(secim==1){

		printf("\n\n1-) SONA ELEMAN EKLEME: ");
		printf("\n2-) BASA ELEMAN EKLEME: ");
		printf("\n3-) ARAYA ELEMAN EKLEME: ");
		printf("\n4-) SONDAN ELEMAN SÝLME: ");
		printf("\n5-) BASTAN VERÝ SÝLME: ");
		printf("\n6-) ARADAN ELEMAN SÝLME: ");
		printf("\n7-) CIKIS YAPMA: ");
		printf("\n\n\nHANGÝ ÝSLEMÝ YAPMAK ÝSTERSÝNÝZ: ");	
		scanf("%d",&islem);
		
		switch(islem){
			
			case 1:
				printf("\nEKLEMEK ÝSTEDÝGÝNÝZ ELEMAN: ");
				scanf("%d",&sonaeklenecek);
				sonaekle(sonaeklenecek);
				printf("\n\n");
				yazdir();
				break;
			case 2:
				printf("\nEKLEMEK ÝSTEDÝGÝNÝZ ELEMAN: ");
				scanf("%d",&basaeklenecek);
				basaekle(basaeklenecek);
				printf("\n");
				yazdir();
				break;
			case 3:
				printf("\nHANGÝ VERÝDEN ONCEYE EKLENSÝN: ");
				scanf("%d",&konum);
				printf("\nEKLEMEK ÝSTEDÝGÝNÝZ ELEMAN: ");
				scanf("%d",&arayaeklenecek);
				arayaekle(konum,arayaeklenecek);
				printf("\n");
				yazdir();
				break;
			case 4:
				sondansil();
				printf("\n");
				yazdir();
				break;
			case 5:
				bastansil();
				printf("\n");
				yazdir();
				break;
			case 6:
				printf("\nHANGÝ ELEMAN SÝLÝNSÝN: ");
				scanf("%d",&aradansilinecek);
				aradansil(aradansilinecek);
				yazdir();
				break;
			case 7:
				secim=2;
				break;			
		}
		
	}
	printf("\n\n\nCIKIS YAPTINIZ TESEKKURLER...");
	getchar();
	getchar();
	
	
	return 0;
}












