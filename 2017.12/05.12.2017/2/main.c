#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b;
	int sonuc;
	
	printf("TABANI GIRINIZ: ");
	scanf("%d",&a);
	printf("USSU GIRINIZ: ");
	scanf("%d",&b);
	
	sonuc=pow(a,b);
	printf("SONUC: %d",sonuc);
	getchar();
	getchar();
	
	return 0;
}
