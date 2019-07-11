#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	FILE *dosya;
	char bilgi[50];
	
	dosya=fopen("deneme.txt","w");
	
	
	printf("AKTARILACAK VERÝ: ");
	gets(bilgi);
	
	fputs(bilgi,dosya);
	
	fclose(dosya);
	getchar();
	return 0;
}
