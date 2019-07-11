#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node* start=NULL;
struct node* temp=NULL;

void hazirdizi(void){
	
	struct node* deneme=(struct node*)malloc(sizeof(struct node));
		struct node* denemeiki=(struct node*)malloc(sizeof(struct node));
	
	deneme->data=5;
	deneme->next=denemeiki;
	denemeiki->data=15;
	denemeiki->next=NULL;
	start=deneme;

}
void yazdir(void){
	temp=start;
	while(temp->next != NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("%d->NULL",temp->data);
}

void arayaekle(int x,int y){
	
	struct node *arayaeklenecek=(struct node*)malloc(sizeof(struct node));
	
	arayaeklenecek->data=y;
	temp=start;
	while(temp->next->data != x){
		temp=temp->next;
	}
	struct node *gecici=(struct node*)malloc(sizeof(struct node));
	gecici=temp->next;
	temp->next=arayaeklenecek;
	arayaeklenecek->next=gecici;		
	}

int main(int argc, char *argv[]) {
	int a,b;
	
	hazirdizi();
	yazdir();
	printf("\n\n");
	
	while(1==1){
		printf("hangi sayidan once yazilsin: (cikis için 00 a basnýz)");
		scanf("%d",&a);
		if(a==00){
			printf("\n\ncikis yaptiniz tesekkurler...");
			break;
		}
		printf("kac yazilsin: ");
		scanf("%d",&b);
	arayaekle(a,b);
	printf("\n");
	yazdir();
	printf("\n\n");
	}
	
		getchar();
		getchar();

	return 0;
}
