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
void yazdir(){
	temp=start;
	
	while(temp->next!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("%d->NULL\n\n",temp->data);
}
int main(int argc, char *argv[]) {
	
	int sayi;
	
	printf("ÝLK SAYIYI GÝRÝNÝZ: ");
	scanf("%d",&sayi);
/*	printf("\n");
	while(sayi!=00){
		basaekle(sayi);
		yazdir();
		printf("BASA EKLEMEK ÝSTEDÝGÝNÝZ SAYIYI GÝRÝNÝZ: (CIKIS ÝCÝN '00' GÝRÝNÝZ)");
		sayi=NULL;
		scanf("%d",&sayi);
			printf("\n");

	}
	printf("\n\nCIKIS YAPTINIZ TESEKKURLER...");*/
	basaekle(sayi);
	yazdir();
	getchar();
	getchar();
	



	
	return 0;
}
