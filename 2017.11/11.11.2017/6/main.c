#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int dizi[2][3]={1,2,3,4,5,6};
    int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ",dizi[i][j]);
		}
		printf("\n");
	} 

getchar();
getchar();
	return 0;
}
