#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i=1,a;
	printf("SON SAYI: ");
	scanf("%d",&a);
	
	while(i<=a)
		{
		if(i==14)
			{
			i++;
			}
		
			if(i%2==0)
		{ 
			printf("%d\n",i);			
		}
		
		
	
	i++;
	}
	
	getch();
	return 0;
}
