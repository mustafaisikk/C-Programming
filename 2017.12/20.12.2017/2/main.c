#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct bilgi{
		char ad[20];
		char soyad[20];
		int yas;
		int boy;
		float kilo;
	};


int main() {
	struct bilgi kisisel;
	
	printf("ADI GIRINIZ: ");
	scanf("%s",&kisisel.ad);
	printf("SOYADI GIRINIZ: ");
	scanf("%s",&kisisel.soyad);
	printf("YASI GIRINIZ: ");
	scanf("%d",&kisisel.yas);
	printf("BOYU GIRINIZ: ");
	scanf("%d",&kisisel.boy);
	printf("KILOYU GIRINIZ: ");
	scanf("%f",&kisisel.kilo);
	printf("\n\n\n");
	printf("ADI: %s\n",kisisel.ad);
	printf("SOYADI: %s\n",kisisel.soyad);
	printf("YASI: %d\n",kisisel.yas);
	printf("BOYU: %d\n",kisisel.boy);
	printf("KILOSU: %.1f\n",kisisel.kilo);
	
	return 0;
}
