#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\n\n\n");
   printf("\t*******CEMBERDE HESAPLAMA*******\n");
  
   float yaricap,pi,cevre,alan;
   printf("\n\n\n\n");
   printf("\tYARI CAPI GIRINIZ: "); 
   scanf("%f",&yaricap);
   pi=3.14;
   alan=pi*yaricap*yaricap;
   cevre=pi*2*yaricap;
   
   printf("\n\n\n\n");
   printf("\tCEMBERIN ALANI: %f\n\n",alan);
   printf("\tCEMBERIN CEVRESI: %f",cevre);
  	
  	getchar();
  	getchar();
  return 0;
}
