#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	FILE *dosya;
	char isim[30];
	char okul[30];
	int yas;
	
	dosya=fopen("mustafa.txt","w");
	
	fprintf(dosya,"Mustafa Isýk\n\n");
	fprintf(dosya,"Karadeniz Teknik Universitesi\n\n");
	fprintf(dosya,"20");
	
	fclose(dosya);
	
	getchar();
	
	return 0;
}
