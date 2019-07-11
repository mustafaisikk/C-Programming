#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char sayi;
	char *s=&sayi;
	
	printf("SAYIYI GIRINIZ: ");
	scanf("%s",&sayi);
	
	printf("\n\nASIL SAYI: %x\n",s);
	s++;
	printf("KONUM +1: %x\n",s);
	s=s-2;
	printf("ASIL KONUM -1: %x\n",s); 
	s=s+6;
	printf("ASIL KONUM +5: %x\n",s);
	
	getchar();
	getchar();
	return 0;
}
