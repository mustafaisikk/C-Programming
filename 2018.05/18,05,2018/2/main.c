#include <stdio.h>
#include <stdlib.h>

int a[4][4]={ {0,0,1,1},
              {0,0,1,1},
			  {1,1,1,1}, 
			  {1,1,1,0} };
	
	
int main(int argc, char *argv[]) {
	
	int i,sayac=0, j, *ak , *ad,n,sayac2=1;
	char x;
	n=sizeof(a)/sizeof(a[0]);
	
	printf("%d\n\n\n",x=128);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){	
			if((a[i][j])==1){
				sayac++;
			}
		}
		printf("%d\n",sayac);
		sayac=0;
	}
	return 0;
}
