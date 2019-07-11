#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char bilgi[40];
	
	e:
	printf("BILGIYI GIRINIZ: ");
	scanf("%s",&bilgi);
	printf("%s\n",bilgi);
	printf("%18s\n",bilgi);
	printf("%20.3s\n",bilgi);
	printf("%-20s\n\n\n\n",bilgi);
	
	goto e;
	getchar();
	getchar();
	return 0;
}
