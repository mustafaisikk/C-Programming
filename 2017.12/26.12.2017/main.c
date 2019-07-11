#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
int sayi [10],i,j,gecici;
	for(i=0;i<10;i++)
	{
		
		printf("%d. sayiyi giriniz:",i+1);
		scanf("%d",&sayi[i]);
	}
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(sayi[i]<=sayi[j]){
				
				gecici=sayi[i];
				sayi[i]=sayi[j];
				sayi[j]=gecici;
								}
						}
					}
					
	printf("\nSayilarin Kucukten Buyuge Siralanisi:\n");
	for(i=0;i<10;i++){
	printf("%d\n",sayi[i]);
					}
	return 0;
}
