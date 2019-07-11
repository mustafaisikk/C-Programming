#include <stdio.h>
#include <stdlib.h>

int main() {

int i,j;
int *p;
int *q;
int a=1;
int *x;
int sayi[20];
int son[60];

for(i=11;i<32;i++){
	
sayi[i-11]=i*i;
}
for(i=0;i<=20;i++){
	
son[a]=sayi[i]/100;
a++;
son[a]=(sayi[i]/10)%10;
a++;
son[a]=(sayi[i]%10);
a++;
}

printf("KACINCI DEGER: ");
scanf("%d",&j);
printf("%d",son[j]);
   getchar();
   getchar();
   return 0;
}
