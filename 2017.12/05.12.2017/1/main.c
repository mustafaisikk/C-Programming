#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a;
	double sonuc;
	
	printf("SAYIYI GIRINIZ: ");
	scanf("%d",&a);
	sonuc=sqrt(a);
	printf("%f",sonuc);
	
	getchar();
	getchar();
	return 0;
}
