#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		 printf("\n");
	}
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
		for(i=1;i<=5;i++){
		for(j=i+1;j<=5;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("*");
		}
		
		printf("\n");		
	}
	for(i=1;i<=5;i++){
		for(j=i-1;j>=1;j--){
			printf(" ");
		}
		for(k=5;k>=i;k--){
			printf("*");
		}
		
		printf("\n");		
	}
	
	getchar();
	getchar();
	return 0;
}
















