#include <stdio.h>
#include <stdlib.h>

int d[13];
int hash(int);
void linprob(int);

int veribul(int);

int main(){
	
	int dizi[]={18,41,22,44,59,32,31,73,12,12};
	int i,n,n2,a;
	
	n=sizeof(dizi)/sizeof(dizi[0]);
	n2=sizeof(d)/sizeof(dizi[0]);
	
	for(i=0;i<n;i++)
		d[i]=0;

	for(i=0;i<n;i++)
	linprob(dizi[i]);
	
	for(i=0;i<n2;i++)
		printf("%d ",d[i]);
		
	a=veribul(44);
	
	if(a==1)
	printf("\n\nveri bulundu");
	else
	printf("\n\nveri yok");
		

	printf("\n\n");

	verisil(12);
	
	for(i=0;i<n2;i++)
	printf("%d ",d[i]);
	
	return 0;
}

int hash(int n)
{
	return (7*n+5)%13;
}

void linprob(int x)
{
	int i,yedek;
	i=hash(x);
	yedek=i;
	
	while(1)
	{
		if(d[i]!=0)
		{
			i=(++i)%13;			
			if(i==yedek)
			{
				printf("\ndizi doludur\n");
				break;	
			}
		}
		else
		{
			d[i]=x;
			break;
		}
	}		
}

int veribul(int x)
{
	int i,yedek;
	i=hash(x);
	yedek=i;
	
	while(1)
	{
		if(d[i]!=x)
		{
			i=(++i)%13;	
					
			if(i==yedek)
			return 0;
		}
		else
		return 1;
	}

}

int verisil(int x)
{
	int i,yedek;
	i=hash(x);
	yedek=i;
	
	while(1)
	{
		if(d[i]!=x)
		{
			i=(++i)%13;	
					
			if(i==yedek)
			printf("eleman yoktur");
		}
		
		else
		{
		d[i]=0;
		return;
		}
	
	}
	
}



