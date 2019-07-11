#include <stdio.h>
#include <stdlib.h>

struct dugum{
	
	int veri;
	struct dugum* sonraki;	
};

struct dugum* baslangic=NULL;
struct dugum* gecici;

void hazirdizi(int i){
	
		if(baslangic==NULL)
		{
			baslangic=(struct dugum* )malloc(sizeof(struct dugum));
			baslangic->veri=i;
			baslangic->sonraki=baslangic;
		}
		
		else{
			
			struct dugum* sonaeklenecek=(struct dugum* )malloc(sizeof(struct dugum));
			sonaeklenecek->veri=i;
			sonaeklenecek->sonraki=baslangic;
			
			gecici=baslangic;
			
			while(gecici->sonraki!=baslangic){
				gecici=gecici->sonraki;
			}
			gecici->sonraki=sonaeklenecek;
		}		
		
}
void yazdir(){
	
		gecici=baslangic;
	while(gecici->sonraki!=baslangic){
		printf("%d->",gecici->veri);
		gecici=gecici->sonraki;
		
	}
	printf("%d\n",gecici->veri);
	
}
void istenen(int x){
	
	if(baslangic->veri==x){
		
		struct dugum* gecici3=baslangic;
	
		while(gecici3->sonraki!=baslangic)
		gecici3=gecici3->sonraki;
		
		struct dugum* gecici2=baslangic;
		baslangic=baslangic->sonraki;
	
		gecici3->sonraki=gecici2;
		free(gecici2);
	}
	
		else
		{
			struct dugum* gecici2=baslangic;
			while(gecici2->sonraki->veri!=x){
				gecici2=gecici2->sonraki;
			}
			struct dugum* gecici3=gecici2->sonraki;
			gecici2->sonraki=gecici2->sonraki->sonraki;
			free(gecici3);
		}		
}
int main(int argc, char *argv[]) {
	
	int veri,silinecek,a;
	while(1==1){
		printf("sayiyi giriniz: ");
		scanf("%d",&veri);
		if(veri==0)
		break;
		hazirdizi(veri);
	}
	yazdir();
	while(1==1){
	
	printf("silinecek veri: ");
	scanf("%d",&silinecek);
	if(silinecek==0)
	break;
	istenen(silinecek);
	yazdir();
}

printf("CIKIS YAPTINIZ TESEKKURLER...");
	return 0;
}
