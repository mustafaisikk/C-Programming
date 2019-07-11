#include <stdio.h>
#include <stdlib.h>

int a[4][4]={{0,0,1,1},{0,0,1,1},{1,1,1,1},{1,1,1,0}};

void baglanti(int,int);

int main(int argc, char *argv[]) {
	baglanti(2,1);
	return 0;
}

void baglanti (int x,int y){
	if(a[x][y]==1){
		printf("komsudur");
	}
	else 
	printf("komsu degildir");
}
