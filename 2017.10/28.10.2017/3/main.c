#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,i;
	int toplam=0;
	printf("SAYINIZ: ");
	scanf("%d",&a);
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
			toplam=toplam+i;
		}
	
	}
	if(toplam==a)
	{
			printf("SAYINIZ MUKEMMEK SAYIDIR");
	}
	else
	{
		printf("SAYINIZ MUKEMMEL SAYI DEGILDIR");
	}	
	getch();
	return 0;
}
