#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int dizi[5][5];
	int i,j,a,b;
	printf("DIZININ SATIR SAYISI: ");
	scanf("%d",&a);
	printf("DIZININ SUTUN SAYISI: ");
	scanf("%d",&b);
	printf("\n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("DIZININ %d'NIN %d.ELEMANI: ",i+1,j+1);
			scanf("%d",&dizi[i][j]);	
				
	    }
	}
	
printf("\n\n\n");
	for(i=0;i<a;i++){
		printf("\t");
		for(j=0;j<b;j++){
			printf("%d ",dizi[i][j]);
		}
		printf("\n");
	}
	getchar();
	getchar();
	return 0;
}
