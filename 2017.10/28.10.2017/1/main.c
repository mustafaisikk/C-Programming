#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/*int a,i,j,k;
	printf("BOYUT: ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		
		for (j=1;j<=a;j++)
		{
		printf(" ");
		}
		
		for(k=1;k<=i;k++)
		{
		printf("* ");
		}
		a--;
		printf("\n");
	}
		*/
		int i,j,x,k;
    printf("\n Piramit icin satir sayisini giriniz : \n");
    scanf("%d",&x); 
    for(i=1; i<=x; i=i+1)
            {
                printf("\n");
                for(j=1; j<=x-i; j=j+1) 
                
                printf(" ");
                              
                
                for(k=1; k<=i+i-1; k=k+1) 
                 printf("*"); }
		
	
getchar();
	
	
	
	return 0;
}
