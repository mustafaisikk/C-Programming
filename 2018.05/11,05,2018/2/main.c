#include <stdio.h>
#include <stdlib.h>



struct dugum
{
	int veri;
	struct dugum *p;
};

struct dugum *d[4];
struct dugum *temp;

int main() {
	int i;
	
	temp=malloc(sizeof(struct dugum));
	temp->veri = 1;
	temp->p = NULL;
	d[0] = temp; 
	
	temp=malloc(sizeof(struct dugum));
	temp->veri = 3;
	temp->p = NULL;
	d[0]->p = temp;
	
	d[1]=NULL;
	d[2]=NULL;
	
	temp=malloc(sizeof(struct dugum));
	temp->veri = 7;
	temp->p = NULL;
	d[3]= temp;
	
	for(i=0;i<4;i++)
	{
		printf("\n%d.sira)  ",i+1);
		
		while(d[i])
		{
		printf("%d ",d[i]->veri);
		d[i]=d[i]->p;
		}
	
	}
	return 0;
}
