#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int dizi[5][5];
	dizi[0][0]=10,dizi[0][1]=20,dizi[1][0]=30,dizi[1][1]=40;
	
	printf("%d %d\n",dizi[0][0],dizi[0][1]);
	printf("%d %d\n",dizi[1][0],dizi[1][1]);
	
	getchar();
	return 0;
}
