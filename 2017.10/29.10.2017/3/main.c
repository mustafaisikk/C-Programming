#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int a,i,fakt;
	e:
	fakt=1;
	i=1;
	printf("SAYINIZ: ");
	scanf("%d",&a);
	while(i<=a)
	{
		fakt=fakt*i;
		printf("%d ",i);
		i++;
	}
	printf("\n\n");
	printf("SAYINIZIN FAKTORIYELI: %d\n\n\n\n",fakt);
	
	goto e;
	return 0;
} 
