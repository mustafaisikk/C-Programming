#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,z;
	printf("SON SAYI: ");
	scanf("%d",&z);
	i=0;
	while(i<=z)
	{
		printf("%d\n",i);
		i++;
	}
	return 0;
}
