#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[6][6];

int main(int argc, char *argv[]) {
	
	FILE *fp;
	int s,i,j;
	i=j=0;
	fp=fopen("graf.txt","r");
	
	while(fscanf(fp,"%d",&s)!=EOF){
		
				a[i][j]=s;
				j++;
				if(j==6){
					i++;
					j=0;
				}
		}
	
		for(i=0;i<6;i++){
			for(j=0;j<6;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	
	
	return 0;
}
