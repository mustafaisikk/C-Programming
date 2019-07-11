#include <stdio.h>
#include <stdlib.h>

int a[4][4]={ {0,0,1,1},
              {0,0,1,1},
			  {1,1,1,1}, 
			  {1,1,1,0} };
	
int main(int argc, char *argv[]) {
	
	int i,sayac=0, j, *ak , *ad,n,sayac2=1;
		sayac=0;


	n=sizeof(a)/sizeof(a[0]);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){	
			if((a[i][j])==1){
				sayac++;
			}
		}
	}
	
	ad=malloc((n+1)*sizeof(int));
	ak=malloc(sayac*sizeof(int));
	
	printf("%d\n\n",sayac);
	sayac=0;
	ad[0]=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){	
			if((a[i][j])==1){
				ak[sayac]=j;
				sayac++;
			}
		}
		ad[sayac2]=sayac;
		sayac2 ++;
	}
	

	for(i=0;i<n;i++)
		printf("%d ",ad[i]);
		
		printf("\n\n");
	
	for(i=0;i<sayac;i++)
		printf("%d ",ak[i]);
	
	return 0;
}










