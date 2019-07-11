#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,j,sayac=0,a;
	
	printf("kaca kadar olsun");
	scanf("%d",&a);
	
	for(i=1;i<a;i++){
		for(j=1;j<=a-i;j++){
			sayac=sayac+1;
			printf("%d ",j);
		}
		printf("\n");
	}
	printf("%d",sayac);
	return 0;
}
