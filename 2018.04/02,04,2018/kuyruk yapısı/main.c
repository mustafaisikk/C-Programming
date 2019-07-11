#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node* start=NULL;
struct node* temp;

void ekle(int x){
	
	if(start==NULL)
	{
		struct node* eklenecek=(struct node* )malloc(sizeof(struct node));
		eklenecek->data=x;
		eklenecek->next=NULL;
		start=eklenecek;
	}
	else
	{
		struct node* eklenecek2=(struct node* )malloc(sizeof(struct node));
		//1-2-3-4-5-6
		temp=start;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=eklenecek2;
		eklenecek2->data=x;
		eklenecek2->next=NULL;
		
	}
}

void sil(){
	if(start==NULL)
	printf("\nZATEN LISTE BOS");
	
	else{
		temp=start->next;
		free(start);
		start=temp;
	}
}

void yazdir(){
	temp=start;
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	if(start!=NULL)
	printf("NULL");
}
int main(int argc, char *argv[]) {

	int a=1,secim,veri;
	
	while(a==1){
		printf("\n\n\t1-)ELEMAN EKLE: ");
		printf("\n\t2-)ELEMAN SIL:");
		printf("\n\t3-)CIKIS YAP:");
		printf("\nYAPMAK ISTEDIGINIZ ISLEM:");
		scanf("%d",&secim);
		switch(secim){
			case 1:
				printf("\nEKLENECEK ELEMAN: ");
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
