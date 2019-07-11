#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loopvoid */


void verial();
int son(int);

void verial(){
	int x;
	printf("KACINCI SAYIYI ISTIYORSUNUZ: ");
	scanf("%d",&x);
	
	printf("%d\n",son(x));
	
}

int son(int x){
	
	int i,a=0;
	int *p=malloc(20*sizeof(int));
	int *q=malloc(60*sizeof(int));
	for(i=11;i<32;i++){
		*(p+(i-11))=i*i;
		printf("%d",*(p+(i-11)));
	}
	printf("\n\n");
	for(i=0;i<=20;i++){
		
		*(q+a)=*(p+i)/100;
		a++;
		*(q+a)=(*(p+i)/10)%10;
		a++;
		*(q+a)=*(p+i)%10;	
		a++;			
	}
		free(p);
	
	return *(q+(x-1));
}



