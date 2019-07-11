#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef int mustafa;

int main() {
	
	mustafa a,b,c,d;
	
	printf("DÖRTGENIN UZUN KENARI: ");
	scanf("%d",&a);
	printf("DORGENIN KISA KENARI: ");
	scanf("%d",&b);
	
	c=a*b;
	d=(a+b)*2;
	
	printf("\n\nDORTGENIN CEVRESI: %d\n",d);
	printf("DORTGENIN ALANI: %d",c);
	return 0;
}
