#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,i,sayacbir=0,sayaciki=0,sayacuc=0,sayacson=0;
	
	printf("KATILAN ARKADAS SAYISI: ");
	e:
	scanf("%d",&a);
	int dizi[a][3];
	if(2<=a && a<=10000){
	
	int mutluluk[a];
	for(i=0;i<a;i++){
			printf("%d.arkadasin istedigi balonlar: ",i+1);
			scanf("%d %d %d",&dizi[i][0],&dizi[i][1],&dizi[i][2]);
			while(dizi[i][0]<0 || dizi[i][0]>1000){
				printf("kirmizi balon sayisini tekrar giriniz");
				dizi[i][0]=NULL;
				scanf("%d",&dizi[i][0]);
			}
				while(dizi[i][1]<0 || dizi[i][1]>1000){
				printf("yesil balon sayisini tekrar giriniz");
				dizi[i][1]=NULL;
				scanf("%d",&dizi[i][1]);
			}
				while(dizi[i][2]<0 || dizi[i][2]>1000){
				printf("sari balon sayisini tekrar giriniz");
				dizi[i][2]=NULL;
				scanf("%d",&dizi[i][2]);
			}
			
			
	}
	for(i=0;i<a;i++){
		sayacbir+=dizi[i][0];
		sayaciki+=dizi[i][1];
		sayacuc+=dizi[i][2];
		}
		for(i=0;i<a;i++){
			mutluluk[i]=fabs((sayacbir/a)-dizi[i][0])+fabs((sayaciki/a)-dizi[i][1])+fabs((sayacuc/a)-dizi[i][2]);
		}
		
		for(i=0;i<a;i++)
		sayacson+=mutluluk[i];
		printf("%d",sayacson);
}

else{
	printf("lutfen tekrar giriniz: ");
	goto e;
    }

	
	getchar();
	
	return 0;
}
