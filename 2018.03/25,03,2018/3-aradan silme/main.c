#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node *start=NULL;
struct node *temp=NULL;

void hazirdizi(){
	
	struct node* bir=(struct node*)malloc(sizeof(struct node));
	struct node* iki=(struct node*)malloc(sizeof(struct node));
	struct node* uc=(struct node*)malloc(sizeof(struct node));
	struct node* dort=(struct node*)malloc(sizeof(struct node));
	
	bir->data=15;
	bir->next=iki;
	iki->data=16;
	iki->next=uc;
	uc->data=17;
	uc->next=dort;
	dort->data=18;
	dort->next=NULL;
	
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


void aradansil(int x){
	
	struct node* gecici=NULL;
	struct node* geciciki=NULL;
	
	temp=start;
	while(temp->next->data!=x){
		temp=temp->next;
	}
	
	gecici=temp;
	geciciki=temp->next->next;
	free(temp->next);
	gecici->next=geciciki;
}

int main(int argc, char *argv[]) {
	
	int a,b;
	hazirdizi();
	yazdir();
	printf("\n\nARADAN SÝLME ÝÇÝN 1'E CIKIS ÝÇÝN 0'A BASINIZ: ");	
	scanf("%d",&a);
	while(a==1){
		printf("SÝLMEK ÝSTEDÝÐÝNÝZ SAYIYI GIRINIZ: ");
		scanf("%d",&b);
		aradansil(b);
		yazdir();
		printf("\n\nARADAN SÝLME ÝÇÝN 1'E CIKIS ÝÇÝN 0'A BASINIZ: ");
		scanf("%d",&a);
	}
	printf("\n\n CIKIS YAPTINIZ TESEKKURLER...");
	
	getchar();
	getchar();
	return 0;
}

















