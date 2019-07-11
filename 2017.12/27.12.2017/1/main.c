#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char a[20],b[20],son[40];
	printf("ILK BILGIYI GIRINIZ: ");
	scanf("%s",&a);
	printf("IKINCI BILGIYI GIRINIZ: ");
	scanf("%s",&b);
	strcat(son,a);
	strcat(son," ");
	strcat(son,b);
	printf("%s",son);
	
	getchar();
	getchar();
	return 0;
}
