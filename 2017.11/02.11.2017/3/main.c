#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int sayilar[100];
	int i,a;
	int ort;
	int toplam=0;
	printf("DÝZÝ BOYUTU: ");
	scanf("%d",&a);
	for (i=0;i<a;i++){
		printf("DÝZÝNÝN %d.SAYISI: ",i+1);
		scanf("%d",&sayilar[i]);
		
	}
	for(i=0;i<a;i++){
		toplam=toplam+sayilar[i];
		
	}
	ort=toplam/a;
	printf("\n\n\n");
	printf("DÝZÝNÝN TOPLAMI: %d\n",toplam);
	printf("DÝNÝZNÝN ORTALAMASI: %d",ort);
	
	getchar();
	getchar();
	return 0;
}






