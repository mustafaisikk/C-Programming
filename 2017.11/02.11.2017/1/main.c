#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int sayi[100];
	int i;
	int carpim=1;
	int a;
	printf("SAYIYI GIRINIZ: ");
	scanf("%d",&a);
	
	for(i=0;i<a;i++)
   {
 	carpim=carpim*sayi[i];
	 }   
	
    printf("%d",carpim);
    
    getchar();
	getchar();  
    
    
	return 0;
}
