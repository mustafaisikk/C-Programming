#include <stdio.h>
#include <stdlib.h>

struct dugum{
	
	int veri;
	struct dugum* sonraki;	
};

struct dugum* baslangic=NULL;
struct dugum* gecici;


void hazirdizi(){
	int i;
	for(i=1;i<=15;i++){
		
		struct dugum* sonaeklenecek=malloc(sizeof(struct dugum));
		sonaeklenecek->veri=i;
		sonaeklenecek->sonraki=NULL;
		
		if(baslangic==NULL)
		baslangic=sonaeklenecek;
		
		else{
			gecici=baslangic;
			
			while(gecici->sonraki!=NULL){
				gecici=gecici->sonraki;
			}
			gecici->sonraki=sonaeklenecek;
			sonaeklenecek->veri=i;
			sonaeklenecek->sonraki=NULL;
		}		
	}	
}

void yazdir(){
	int i=0;
	gecici=baslangic;
	
	while(gecici->sonraki!=NULL){
		printf("%d->",gecici->veri);
		gecici=gecici->sonraki;
		i++;
		if(i==15)
		return 0;
	}
	printf("%d->NULL",gecici->veri);
}

void dairesel(){
		gecici=baslangic;
			//1-2-3-4-5-6-7-null
			while(gecici->sonraki!=NULL){
				gecici=gecici->sonraki;
			}
			gecici->sonraki=baslangic;
}

int main(int argc, char *argv[]) {
	
	hazirdizi();
	dairesel();

		gecici=baslangic;
	while(gecici->sonraki!=gecici){	
		
/*		struct dugum* geciciiki;
		struct dugum* geciciuc;
		
		geciciiki=gecici;
		geciciuc=gecici->sonraki->sonraki;
		free(gecici->sonraki);
		geciciiki->sonraki=geciciuc;  */
	
		gecici->sonraki=gecici->sonraki->sonraki;
//		gecici=gecici->sonraki;
		yazdir();
		printf("\n");
	
	} 
	printf("%d",gecici->veri);   
	
	return 0;
}








