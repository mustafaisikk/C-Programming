#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,c,d;
	char b;
	
	e:
	printf("ILK SAYI: ");
	scanf("%d",&a);
	printf("ISLEM: ");
	scanf("%s",&b);
	printf("IKINCI SAYI: ");
	scanf("%d",&c);
	
	switch(b)
	{
		case '+':
	d=a+c;	
	printf("\n\n");
	printf("SONUC: %d",d);
	break;
	case '-':
	d=a-c;
	printf("\n\n");
	printf("SONUC: %d",d);
	break;
	case '*':
	d=a*c;
	printf("\n\n");
	printf("SONUC: %d",d);
	break;
	case '/':
	d=a/c;
	printf("\n\n");
	printf("SONUC: %d",d);
	break;
	default:
		printf("HATALI GIRIS YAPTINIZ");
		break;
	

	}
	printf("\n\n");
	goto e;
	return 0;
}
