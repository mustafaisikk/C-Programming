#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	double a,b,c;
	e:
	printf("DERECEYI GIRINIZ: ");
	scanf("%lf",&a);
	b=sin(a);
	printf("SINUSU: %lf\n",b);
	c=cos(a);
	printf("COSINUSU: %lf\n\n\n",c);
	goto e;
	getchar();
	getchar();
	return 0;
}
