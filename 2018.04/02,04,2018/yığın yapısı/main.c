#include <stdio.h>
#include <stdlib.h>

struct node{
	
	int data;
	struct node* next;
};

struct node* start=NULL;
struct node* temp;

void ekle(int x){
	
	if(start==NULL){
		struct node* eklenecek=(struct node* )malloc(sizeof(struct node));
		eklenecek->next=NULL;
		eklenecek->data=x;
		start=eklenecek;
	}
	else{
		struct node* eklenecek2=(struct node* )malloc(sizeof(struct node));
		eklenecek2->next=start;
		eklenecek2->data=x;
		start=eklenecek2;		
	}
}

void sil()
{
	if(start==NULL)
	printf("liste bos");
	else{
		struct node* gecici;
		gecici=start->next;
		free(start);
		start=gecici;
		}
}

void yazdir(){
		temp=start;
	while(temp!=NULL){
		printf("%d<-",temp->data);
		temp=temp->next;
		}
		
		if(start!=NULL)
		printf("NULL");
}
int main(int argc, char *argv[]) {

int a=1,secim,veri;
	while(a==1){
		printf("\n\n\t1-)VERI EKLE: ");
		printf("\n\t2-)VERI SIL: ");
		printf("\n\t3-)CIKIS YAP: \n");
		printf("YAPMAK ISTEDIGINIZ ISLEMI SECINIZ: ");
		scanf("%d",&secim);
		switch(secim){
			case 1:
				printf("\nEKLENECEK VERÝ: ");
				scanf("%d",&veri);
				ekle(veri);
				printf("\n");
				yazdir();
				break;
			case 2:
				sil();
				printf("\n");
				yazdir();
				break;
			case 3:
				a=2;
				break;
		}
	}
if(start!=NULL)
	printf("\n\nCIKIS YAPTINIZ TESEKKURLER...(%d)",start->data);
	else
	printf("\n\nCIKIS YAPTINIZ TESEKKURLER...");
	getchar();
	getchar();
	
	return 0;
}
