#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char a[30],b[30],c[30],d[30];
	e:
	
	printf("BILGIYI GIRINIZ: ");
	gets(a);
	strcpy(b,a);
	printf("GIRILEN BILGI: %s  \n\n",b);
	printf("10 KAR. KESILECEK BILGIYI GIRINIZ: ");
	gets(c);
	strncpy(d,c,10);
	printf("GIRILEN BILGILER: %s\n\n\n",d);
	goto e;
	
	getchar();
	getchar();
	return 0;
}
