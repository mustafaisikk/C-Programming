#include <stdio.h>
#include <stdlib.h>

struct dugum{
	char s;
	struct dugum *p[4];
};

struct dugum *A;
struct dugum *D;

int main(int argc, char *argv[]) {
	
	int i;
	A=malloc(sizeof(struct dugum));
	for(i=0;i<4;i++)
	A->p[i]=malloc(sizeof(struct dugum));
	
	A->s='A';
	
	D=malloc(sizeof(struct dugum));
	D->s='D';
	
	A->p[0]=NULL;
	A->p[1]=NULL;
	A->p[3]=D;
	
	printf("A nin 4.baglantisi=  %c",A->p[3]->s);
	return 0;
}
