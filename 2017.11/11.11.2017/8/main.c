#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,j,a,b;
	printf("MATRIS SATIR BOYUTU: ");
	scanf("%d",a);
	printf("MATRISIN SUTUN BOYUTU: ");
	scanf("%d",&b);
	int m1[a][b],m2[a][b],top[a][b];
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("ILK MATRISIN %d'IN %d.SI: ",i+1,j+1);
			scanf("%d",&m1[i][j]);
			
		}
		printf("\n");
	}
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("IKINCI MATRISIN %d'IN %d.SI: ",i+1,j+1);
			scanf("%d",&m2[i][j]);
			
		}
		printf("\n");
	}


	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			top[i][j]=m1[i][j]+m2[i][j];
			
		}
	}
for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%d ",top[i][j]);
			
			
		}
	printf("\n");
	}











	return 0;
}
