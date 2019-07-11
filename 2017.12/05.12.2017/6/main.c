#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char cumle[100];
	e:
	printf("CUMLE GIRINIZ: ");
	gets(cumle);
	printf("CUMLENIN UZUNLUGU: %d\n\n",strlen(cumle));
	goto e;
	
	getchar();
	getchar();
	
	return 0;
	
	
}
