#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b,c,d,i,x;
	e:
	printf("SAYIYI GIRINIZ: ");
	scanf("%d",&x);
	a=1;
	b=1;
	c=1;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	
	for(i=1;i<=x-3;i++)
	{
	 d=a+b+c;
	 a=b;
	 b=c;
	 c=d;
	 
	 printf("%d\n",d);	
	}
	goto e;
	
	
	
	
	
	return 0;
}
