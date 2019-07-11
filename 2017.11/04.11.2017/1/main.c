#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,a;
	
	printf("BOYUT: ");
	scanf("%d",&a);
	
	printf("\n\n");
	
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	getchar();
	getchar();
	return 0;
}
