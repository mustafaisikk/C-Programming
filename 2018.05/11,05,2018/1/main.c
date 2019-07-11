#include <stdio.h>
#include <stdlib.h>

int n;

int * kabarciksirala(void)
{
	
	int i, j, gecici,k;
	static int d[] = {74, 57, 3, 7, 95, -6, 17};	
	
	n = sizeof(d) / sizeof(d[0]);

	for(j=0 ; j<n-1 ; j++)
	{
		
	for(i=0 ; i<n-j-1 ; i++)
	{
	
		if( d[i] > d[i+1] )
		{
			gecici = d[i];
			d[i] = d[i+1];
			d[i+1] = gecici;
		}
	}
	}
	return d;
}

int main()
{
	
	int k;
	int *p;
	
	p=kabarciksirala();
	
	for(k=0 ; k<n ; k++)
	{
		printf( "%d ",p[k] );
	}
	
	printf( "\n" );
	return 0;
}
