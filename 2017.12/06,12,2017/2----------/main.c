#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char bilgi[30];
	int a,b,c,sonuc3,sonuc4;
	double sonuc1,sonuc2;
	float e,f;
	
	printf("1-) US ALMA PROGRAMI\n");
	printf("2-) KAREKOK ALMA PROGRAMI\n");
	printf("3-) ALT VE UST DEGERE YUVARLAMA PROGRAMI \n");
	printf("4-) SIN COS KULLANIMI \n");
	printf("5-) STRING IFADE PROGRAMI\n");
	printf("6-) KELIME UZUNLUGUNU BULAN PROGRAM\n");
	printf("7-) MUTLAK DEGER BULMA\n");
	printf("8-) LOGARITMA ALMA");
	e:
	printf("\n\n");
	
	printf("KULLANILACAK PROGRAM: ");
	scanf("%d",&a);
	
	switch(a)
	{
	
	case 1:
		printf("\n\n");
		printf("US ALINACAK SAYIYI GIRINIZ: ");
		scanf("%d",&b);
		printf("USSU GIRINIZ: ");
		scanf("%d",&c);
		sonuc1=pow(b,c);
		printf("\n");
		printf("GIRILEN SAYININ KARESI: %lf",sonuc1);
		break;
	case 2:
		printf("\n");
		printf("KAREKOK ALINACAK SAYIYI GIRINIZ: ");
		scanf("%d",&b);
		sonuc2=sqrt(b);
		printf("\n");
		printf("GIRILEN SAYININ KAREKOKU: %lf",sonuc2);
		break;
		
	case 3:
		printf("\n\n");
		printf("SAYIYI GIRINIZ: ");
		scanf("%f",&e);
		sonuc3=floor(e);
		sonuc4=ceil(e);
		printf("ALT DEGER: %d\n",sonuc3);
		printf("UST DEGER: %d",sonuc4);
		break;
	case 4:
		printf("\n\n");
		printf("DERECEYI GIRINIZ: ");
		scanf("%f",&e);
		sonuc1=sin(e);
		sonuc2=cos(e);
		printf("DERECENIN SIN DEGERI: %lf\n",sonuc1);
		printf("DERECENIN COS DEGERI: %lf",sonuc2);
		break;
	case 5:
		printf("\n\n");
		printf("BILGIYI GIRINIZ: ");
		scanf("%s",&bilgi);
		printf("GIRILEN BILGI %s\n",bilgi);
		printf("18 KARAKTER SAGA DAYALI: %18s\n",bilgi);
		printf("20 KARAKTER BOYUTLU BASTAN 3 HARF: %20.3s\n",bilgi);
		printf("20 KARAKTER SOLA DAYALI: %-20s\n",bilgi);
		break;
	case 6:
		
		printf("\n\nKELIME GIRINIZ: ");
		scanf("%s",bilgi);
		printf("KELIMENIN UZUNLUGU: %d\n\n",strlen(bilgi));
		break;
	case 7:
		printf("SAYIYI GIRINIZ: ");
		scanf("%d",&b);
		sonuc3=fabs(b);
		printf("SAYININ MUTLAK DEGERI: %d",sonuc3);
		break;
	case 8:
		printf("SAYIYI GIRINIZ: ");
		scanf("%d",&b);
		sonuc1=log(b);
		printf("SAYININ LOGARITMASI: %.4lf",sonuc1);
}
		goto e;
		
		getchar();
		getchar();	
		
	return 0;
}
