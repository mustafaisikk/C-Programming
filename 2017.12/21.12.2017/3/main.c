#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int kup(int a){

int son;

son=a*a*a;

return son;

}

int main() {
	
	int a;
	
	printf("SAYIYI GIRINIZ: ");
	scanf("%d",&a);
	printf("SONUC: %d",kup(a));
	getchar();
	getchar();
	return 0;
}
