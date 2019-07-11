#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,k,kalan,kcevre,kup,kupa,c,calan,ccevre,x,islem,d1,d2,dalan,dcevre;
	printf("MATAMATIK PROGRAMI: \n");
	printf("********************\n");
	printf("1-KAREDE ALAN VE CEVRE HESABI\n");
	printf("2-GIRILEN SAYININ KUPU\n");
	printf("3-CEMBERDE ALAN VE CEVRE HESABI\n");
	printf("4--5xý+5x+9 x E GORE CEVABI\n");
	printf("5-DIKDIRTGENDE ALAN VE CEVRE HESABI\n\n");
	e:
	printf("KULLANMAK ISTEDIGINIZ ALGORITMA: ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("\n\n");
		printf("KARENIN KENARI: ");
		scanf("%d",&k);
		kalan=k*k;
		kcevre=4*k;
		printf("\n");
		printf("KARENIN ALANI: %d\n",kalan);
		printf("KARENIN CEVRESI: %d",kcevre);
		break;
				
		case 2:		
		printf("\n\n");
		printf("SAYINIZ:");
		scanf("%d",&kupa);		
		kup=kupa*kupa*kupa;		
		printf("SAYININ KUPU: %d",kup);		
		break;		
		
		case 3:
		printf("\n\n");	
		printf("CEMBERIN YARI CAPI: ");
		scanf("%d",&c);
		calan=3*c*c;
		ccevre=2*3*c;
		printf("\n");
		printf("CEMBERIN ALANI: %d\n",calan);
		printf("CEMBERIN CEVRESI: %d",ccevre);
		break;		
		
		case 4:
		printf("X: ");	
		scanf("%d",&x);	
		islem=(-5*x*x)+(5*x)+9;
		printf("SONUC: %d",islem);
		break;
		
		case 5:
		printf("\n\n");	
		printf("DIKDORTGENIN 1.KENARI: ");		
		scanf("%d",&d1);		
		printf("DIKDORTGENIN 2.KENARI: ");		
        scanf("%d",&d2);
		dalan=d1*d2;
		dcevre=2*(d1+d2);
		printf("DIKDORTGENIN ALANI: %d\n",dalan);
		printf("DIKDORTGENIN CEVRESI: %d",dcevre);
		break;
		
		default:
		printf("HATALI SAYI GIRDINIZ");
	    break;
	}
	printf("\n\n\n");
	goto e;
	
	getchar();
	return 0;
}
