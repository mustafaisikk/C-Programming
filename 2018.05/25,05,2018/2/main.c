#include <stdio.h>
#include <stdlib.h>

char s[][10]={"trabzon","samsun","van"};

int hash[10];
void hashfon(char [][10]);

int main(int argc, char *argv[]) {
	
	hashfonk(s);
	return 0;
}

void hashfonk(char a[][10]){
	int i,j,t,sonuc=0;
	
	for(i=0;i<3;i++){	
	printf("%s",a[i]);
	printf("\n");
	}
	printf("\n\n");
	j=0;
	for(i=0;i<3;i++){
		while(a[i][j]!='\0')
		{
			printf("%c ",a[i][j]);
			j++;
		}
		j=0;
		printf("\n");
	}
	printf("\n\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<10;j++)
		{
		printf("%c",a[i][j]);
		sonuc+=a[i][j];
		hash[i]=sonuc%20;
		}
		
		printf("%d",hash[i]);
		sonuc=0;
		printf("\n");
	}
	
	
}
