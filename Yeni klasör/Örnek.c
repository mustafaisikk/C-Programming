#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,i;
	int b;
	char cumle[60];
	char ch;
	int sayac=0;
	printf("CUMLEYI GIRINIZ: ");
	char *p=gets(cumle);
	b=strlen(p);
	printf("%d\n\n",b);

	printf("KAC KELIME BULMAK ISTERSINIZ: ");
	scanf("%d",&a);
	
	int dizi[a];
	for(i=0;i<a;i++){
		printf("%d.KARAKTER: ",i+1);
		scanf("%d",&dizi[i]);
		
		while(dizi[i]>b){
				printf("YANLIS SAYI GIRDINIZ: ");
			dizi[i]=NULL;
			scanf("%d",&dizi[i]);
		
		}
	}
	
	
	for(i=0;i<a;i++){
		printf("%d.istenen karakter  %c\n",i+1,*(p+(dizi[i]-1)));
	}
	
	
	getchar();
	getchar();
	return 0;
}
