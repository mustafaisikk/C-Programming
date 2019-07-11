#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	FILE *belge;
	char harf;
	
	belge=fopen("deneme.txt","r");
	
	
	do
	{
	
	harf=getc(belge);
	printf("%c",harf);
	}
	
	while(harf!=EOF);
	
	fclose(belge);
	
	
	
	
	return 0;
}
