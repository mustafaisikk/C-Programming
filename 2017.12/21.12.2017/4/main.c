#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int dortgen(int a,int b)
{
	int i,j;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			if(i==1 || i==a || j==b || j==1)
				printf("*");
			else
			printf(" ");
			
		}
		printf("\n");
	}
}

int main() {
	
	int a,b,i,j;
	
		printf("DORTGENIN BOYU: ");
		scanf("%d",&a);
		printf("DORTGENIN ENI: ");
		scanf("%d",&b);

		dortgen(a,b);
	
	getchar();
	getchar();

	
	return 0;
}
