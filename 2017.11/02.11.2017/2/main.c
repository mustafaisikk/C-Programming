
#include <stdio.h>
#include <stdlib.h>

int main() {
 char il[3] [15];
 int i;
 
 for(i=0;i<3;i++)
 {
 	printf("SEH�R GIRINIZ: ");
    scanf("%s",&il[i]);
 }
 printf("\n");
 
 for(i=0;i<3;i++){
 	printf("%s\n",il[i]);
 }
 
 getchar();
 getchar();
 return 0;
}

