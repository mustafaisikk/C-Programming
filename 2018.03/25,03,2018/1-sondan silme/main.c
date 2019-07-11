#include <stdio.h>
#include <stdlib.h>

struct node{
	
	int data;
	struct node *next;
};

struct node *start=NULL;
struct node *temp=NULL;
void hazirdizi(){
	
	struct node* deneme=(struct node*)malloc(sizeof(struct node));
	struct node* denemeiki=(struct node*)malloc(sizeof(struct node));
	struct node* denemeuc=(struct node*)malloc(sizeof(struct node));
	struct node* denemedort=(struct node*)malloc(sizeof(struct node));
	deneme->data=15;
	deneme->next=denemeiki;
	denemeiki->data=16;
	denemeiki->next=denemeuc;
	denemeuc->data=17;
	denemeuc->next=denemedort;
	denemedort->data=18;
	denemedort->next=NULL;
	start=deneme;
}


void yazdir(){
	
	temp=start;
	while(temp->next != NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("%d->NULL",temp->data);
	
}

void sondansil(){
	temp=start;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	free(temp->next);
	temp->next=NULL;
	
}
int main(int argc, char *argv[]) {
	int a;
	
	hazirdizi();
	yazdir();
	printf("\n\n");
	printf("ELEMAN SÝLMEK ÝCÝN 1'E CIKIS YAPMAK ÝCÝN 0'A BASINIZ: ");
	scanf("%d",&a);
	while(a==1){
		
		sondansil();
		yazdir();
		
			printf("\nELEMAN SÝLMEK ÝCÝN 1'E CIKIS YAPMAK ÝCÝN 0'A BASINIZ: ");
		scanf("%d",&a);
		
	}
	printf("\n\n\nCIKIS YAPTINIZ TESEKKURLER...");
	getchar();
	getchar();
	
	return 0;
}
