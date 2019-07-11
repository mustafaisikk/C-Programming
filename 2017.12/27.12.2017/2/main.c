#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,a;
	int sayac;
	
	
printf("SON SAYIYI GIRINIZ: ");
scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		sayac=0;
		
		for(j=1;j<=i/2;j++){
			if(i%j==0){
				sayac=sayac+j;
			
			if(sayac==i)
			
			printf("%d\n",i);
		}
		
		}
		
		
	}
	
	getchar();
		getchar();
	return 0;
}
