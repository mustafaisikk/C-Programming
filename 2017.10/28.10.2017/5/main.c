#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,x,y,z,f,t;
	printf("SAYINIZ: ");
	scanf("%d",&a);
	f=a/100;
	x=a%10;
	y=a/10;
	t=y%10;
	printf("SAYININ YUZLER BASAMAGI: %d\n",f);
	printf("SAYININ ONLAR BASAMAGI: %d\n",t);
	printf("SAYININ BIRLER BASAMAGI: %d\n",x);
	
	
	getchar();
	getchar();
	
	return 0;
}
