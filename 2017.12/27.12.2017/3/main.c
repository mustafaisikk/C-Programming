#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int i,j,a;
	
	printf("KARENIN KENARINI GIRINIZ: ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		
		for(j=1;j<=a;j++){
			if(i+j==a/2+1 || i==a/2+1 || j==a/2+1 || i+j==a+a/2+1 || j-i==a/2 || i-j==a/2)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
		
	}
	
	

   getch();

	return 0;
}
