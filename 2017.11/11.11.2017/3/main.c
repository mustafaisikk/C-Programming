#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,j,k,a;
	printf("KAC KATLI OLSUN: ");
	scanf("%d",&a);
	
	printf("\n\n\n");
	for(i=1;i<=a;i++)
	{
	printf("\t");
		for(j=i;j<=a;j++)
		{
			printf(" ");
		}
			for(k=1;k<=i;k++){
			printf("* ");
	         }
		
		printf("\n");	
	}
	getchar();
	getchar();
	return 0;
}
