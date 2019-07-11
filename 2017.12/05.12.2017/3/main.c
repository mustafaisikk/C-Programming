#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double a,b,c;
	e:
	printf("SAYIYI GIRINIZ: ");
	scanf("%lf",&a);
	b=floor(a);
	printf("ALT DEGER: %.f\n",b);
	c=ceil(a);
	printf("UST DEGER: %.f\n\n\n",c);
	goto e;
	getchar();
	getchar();
	return 0;
}
