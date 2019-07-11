#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,a;
	printf("SINIR: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		if (i%5==0){
		printf("%d",i);
		printf("\n");
		}
		}
		getchar();
		getchar();
	return 0;
}
