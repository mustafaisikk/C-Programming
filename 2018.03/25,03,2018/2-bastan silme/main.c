#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node* start;
struct node* temp;

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

void bastansil(){
	struct node* gecici=NULL;
	gecici=start->next;
	free(start);
	start=gecici;
}

int main(int argc, char *argv[]) {
	hazirdizi();
	yazdir();
	printf("\n\n");

	int a;
	printf("BASTAN SÝLMEK ÝCÝN 1'E CIKIS ÝCÝN 0'A BASINIZ: ");
	scanf("%d",&a);
	while(a==1){
	bastansil();
	yazdir();
	printf("\nBASTAN SÝLMEK ÝCÝN 1'E CIKIS ÝCÝN 0'A BASINIZ: ");
	scanf("%d",&a);
	}
	
	printf("\n\n\tCIKIS YAPTINIZ TESEKKURLER...");
	
	getchar();
	getchar();
	return 0;
}
