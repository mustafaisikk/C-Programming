#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int toplam(int a,int b){
	
	int c;
	
	c=a+b;
	
	return c;
}

int main() {
	int a,b;
	e:
	printf("ÝLK SAYIYI GIRINIZ: ");
	scanf("%d",&a);
	printf("ÝKÝNCÝ SAYIYI GIRINIZ: ");
	scanf("%d",&b);
	printf("SONUC: %d",toplam(a,b));
	printf("\n\n");
	goto e;
	getchar();
	getchar();
	return 0;
}
