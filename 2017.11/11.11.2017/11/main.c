#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char cumle[100];
int main() {
	printf("CUMLEYI GIRINIZ: ");
	gets(cumle);
	printf("CUMLENIN UZUNLUGU : %d",uzunluk());
	
	getchar();
	getchar();
	return 0;
}
int uzunluk(){
	int i=0;
	int sayac=0;
	while(cumle[i]!='\0'){
		sayac++;
		i++;
		
	}
	return sayac;
}
