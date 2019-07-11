#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	FILE *dosya;
	char bilgi[50];
	
	dosya=fopen("belge.txt","r");
	
	
	fgets(bilgi,50,dosya);
	
	puts(bilgi);
	
	fclose(dosya);
	
	



	return 0;
}
