#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *start=NULL;
struct node *temp=NULL;

void hazirdizi(){
	
	struct node* bir=(struct node* )malloc(sizeof(struct node));
	struct node* iki=(struct node* )malloc(sizeof(struct node));
	struct node* uc=(struct node* )malloc(sizeof(struct node));
	struct node* dort=(struct node* )malloc(sizeof(struct node));
	struct node* bes=(struct node* )malloc(sizeof(struct node));
	struct node* alti=(struct node* )malloc(sizeof(struct node));
	struct node* yedi=(struct node* )malloc(sizeof(struct node));
	struct node* sekiz=(struct node* )malloc(sizeof(struct node));
	
	bir->data=1;
	bir->next=iki;
	iki->data=2;
	iki->next=uc;
	uc->data=3;
	uc->next=dort;
	dort->data=4;
	dort->next=bes;
	bes->data=5;
	bes->next=alti;
	alti->data=6;
	alti->next=yedi;
	yedi->data=7;
	yedi->next=sekiz;
	sekiz->data=8;
	sekiz->next=NULL;
	
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

void bastansil(){
	
	struct node* gecici=NULL;
	
	gecici=start->next;
	free(start);
	start=gecici;
}

void sondansil(){
	
	temp=start;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	free(temp->next);
	temp->next=NULL;
}

void aradansil(int x){
	
	if(start->data==x){
		bastansil();
		return 0;
	}
	struct node* gecici=NULL;
	struct node* geciciiki=NULL;
	
	temp=start;
	while(temp->next->data!=x){
		temp=temp->next;
	}
	if(temp->next==NULL){
		sondansil();
		return 0;
	}
	gecici=temp;
	geciciiki=temp->next->next;
	free(temp->next);
	gecici->next=geciciiki;
	

}

int main(int argc, char *argv[]) {
	
	int a,b,c=1;
	
	hazirdizi();
	yazdir();


	while(c==1){
	printf("\n\n\n1-)BASTAN SIL\n");
	printf("2-)ORTADAN SIL\n");
	printf("3-)SONDAN SÝL\n");
	printf("4-)CIKIS YAP\n\n");

	printf("YAPMAK ISTEDÝÐÝNÝZ ÝSLEMÝ SECÝNÝZ: ");
	scanf("%d",&a);
	
	switch(a){
		case 1:
			bastansil();
			printf("\n");
			yazdir();
			printf("\n");
			break;
		case 2:
			printf("\n HANGÝ ELEMAN SÝLÝNSÝN: ");
			scanf("%d",&b);
			aradansil(b);
			printf("\n");
			yazdir();
			printf("\n");
			break;
		case 3:
			sondansil();
			printf("\n");
			yazdir();
			printf("\n");
			break;
		case 4:
			c=2;
			break;
	}
	}
	
	printf("\n\nCIKIS YAPTINIZ TESEKKURLER: ");
	
	getchar();
	getchar();
	return 0;
}
