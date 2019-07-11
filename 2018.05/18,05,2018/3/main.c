#include <stdio.h>
#include <stdlib.h>


int komsuluk[6][6]={ {0,1,0,1,0,0}, 
					 {1,0,1,0,0,0},
					 {0,1,0,1,1,0},
					 {1,0,1,0,1,0},
					 {0,0,1,1,0,0},
					 {0,0,0,0,0,0} };

int yonluyonsuz(int x [][6]){
		int i,j,sayac=0;
	
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(komsuluk[i][j]!=komsuluk[j][i])
			return 1; 			
		}
		return 0;
	}	
}
int main(int argc, char *argv[]) {
		
if(yonluyonsuz(komsuluk[6][6]))
printf("yonludur");
else 
printf("yonsuzdur");
	return 0;
}
