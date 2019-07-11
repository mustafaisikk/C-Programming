#include <stdio.h>
#include <stdlib.h>

struct dugum{
	int kat,us;
	struct dugum *p;
};

struct dugum *fonk1,*fonk2;
struct dugum * dugumolustur(int ,int );
void yazdir(struct dugum *);
struct dugum * toplason(struct dugum *,struct dugum *);

int main(int argc, char *argv[]) {
	
	struct dugum *toplam;
	
	fonk1=dugumolustur(3,2);
	fonk1->p=dugumolustur(5,1);
	fonk1->p->p=dugumolustur(5,0);
		
		yazdir(fonk1);
		printf("\n");
		
	fonk2=dugumolustur(8,2);
	fonk2->p=dugumolustur(10,1);
	fonk2->p->p=dugumolustur(7,0);
		yazdir(fonk2);
/*
	toplam=toplason(fonk1,fonk2);
	printf("\n");
		yazdir(toplam);
		*/
	return 0;
}

void yazdir(struct dugum *x){
	
	while(x){
		
		if(x->us==1)
		printf("%dX+",x->kat);
		
		else if(x->us!=0)
		printf("%dX^%d+",x->kat,x->us);
		 
		else
		printf("%d",x->kat);
		
		x=x->p;
	}
}


struct dugum *dugumolustur(int x,int y){
	
	struct dugum *ilk=malloc(sizeof(struct dugum));
	
	ilk->kat=x;
	ilk->us=y;
	ilk->p=NULL;
	
	return ilk;
	
}


struct dugum * toplason(struct dugum *x,struct dugum *y){
	
	struct dugum *sonuc,*yedek;
	yedek=sonuc=malloc(sizeof(struct dugum));
	
	while(x){
		sonuc->kat=x->kat+y->kat;
		sonuc->us=x->us;
		
		if(x->p!=NULL)		
		sonuc=sonuc->p=malloc(sizeof(struct dugum));
	
		x=x->p;
		y=y->p;
	
}
	return yedek;
}














