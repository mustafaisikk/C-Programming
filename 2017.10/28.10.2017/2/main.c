#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, sayi, j, k;
	
	printf("\n \n Kac katli olsun ? ");
	scanf("%d", &sayi);
	
	for(i=1; i<=sayi; i++){
		
		for(j=i; j<=sayi; j++){
			printf(" ");
		}
		for(k=1; k<=i; k++){
			printf("* ");
			
		}
		printf("\n");
	}
	
	
	getche();
	return 0;
}
