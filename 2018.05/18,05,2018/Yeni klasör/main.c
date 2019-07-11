#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int d[6]={5,2,4,6,1,3};
	int i,j,n,gecici,k,t;
	
	n=sizeof(d)/sizeof(d[0]);
	
	for(i=0;i<=n;i++){
		for(j=i-1;j>=0;j--){
			t=j;
			if(d[j]>d[i]){
				while(d[j]>d[i]){
					j--;
				}
				gecici=d[i];
				d[i]=d[j];
				d[j]=gecici;
			}
			j=t;
			}
				for(k=0;k<n;k++){
			printf("%d ",d[k]);
		}
		printf("\n");
	}
	
	
	return 0;
}
