#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	FILE *fp;
	int i;
	char ch;
	char cb;
	int sayac=0;
	char isim[5][10];
	int numara[5];
	int notu[5];
	char a[5][10];
	int ort[5],numaralar[5];
	int toplam=0;
	

	fp=fopen("C:\\Users\\Mustafa\\Desktop\\SON.txt","w");
	for(i=0;i<5;i++){
		
		printf("KÝSININ ADI: ");
		scanf("%s",isim[i]);
		printf("KISININ NUMARASI: ");
		scanf("%d",&numara[i]);
		printf("KISININ NOTU: ");
		scanf("%d",&notu[i]);
	}
	
		
	for(i=0;i<5;i++){
	fprintf(fp,"%s  %d  %d\n",isim[i],numara[i],notu[i]);
	}
	fclose(fp);
	
	fp=fopen("C:\\Users\\Mustafa\\Desktop\\SON.txt","r");
	for(i=0;i<5;i++){
		fscanf(fp,"%s  %d  %d",a[i],&numaralar[i],&ort[i]);
		toplam+=ort[i];
		sayac++;
	}
	printf("%d  %d  %d",toplam,sayac,(toplam/sayac));
	fclose(fp);
  
	return 0;
}
