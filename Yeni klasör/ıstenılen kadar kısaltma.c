#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char *sondurum(char *p,int a){
	
	int uzunluk=strlen(p);
	
	if(a>uzunluk){
		return NULL;
	}
	
	else 
	return p+a;
	
}

int main()
{
char kelime[10];
int a;

printf("Kelimeyi giriniz: ");
scanf("%s",kelime);

printf("Kacinci harften sonra yazilsin: ");
scanf("%d",&a);

char *p=sondurum(kelime,a);

	if(p==NULL){
		
		printf("YANLIS SAYI GIRDINIZ");
	}
	
	else 
	printf("%s",p);
	
}

