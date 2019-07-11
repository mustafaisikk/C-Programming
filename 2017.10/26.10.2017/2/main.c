#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int a,b,c,i,x;
	printf("SAYINIZI GIRINIZ: ");
	scanf("%d",&x);
	a=1;
	b=1;
	printf("%d\n",a);
	printf("%d\n",b);
	
	for(i=1;i<=x-2;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
	
	getchar();
	getchar();
	
	return 0;
}
