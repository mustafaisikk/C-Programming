#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, gecici,gecici2,gecici3, adet,i ,j,s=0,bayrak,sayac=0,flag=0;
	  
	  printf("Dizi boyutunu giriniz: ");
	  scanf("%d",&n);
	  
	  int dizi[n];
	  int dizi2[n];
	  int mod[n];
	 

    for(i=0; i<n; i++){ 
        printf("Sayi giriniz: ");
        scanf("%d", &dizi[i]);
    }
    for(i=0; i<n-1;i++)
	{ 
        for(j=i+1; j<n; j++)
		{
            if(dizi[i] > dizi[j])
			{
                gecici = dizi[i]; 
                dizi[i] = dizi[j]; 
                dizi[j] = gecici; 
            }
        }
	  }

    for(i=0;i<n;i++){
    	dizi2[i]=1;
    	gecici2=i;
    	gecici3=i+1;
    		while(dizi[i]==dizi[i+1]){
    		dizi2[gecici2]+=1;
    		dizi2[gecici3]=0;
    		i++;
		}
	}
	
	for(i=0;i<n;i++)
	printf("%d ",dizi[i]);
	
	printf("\n\n");
	
	for(i=0;i<n;i++){
		if(dizi2[i]!=0){
			printf("%d   %d\n",dizi[i],dizi2[i]);
		}
	}
	
	
	return 0;
}
