#include <stdio.h>
#include <stdlib.h>

int main()
{
   float kisak,uzunk,alan,cevre;
  
  printf("\n\n\n");
  printf("\tKISA KENARI GIRINIZ: ");
  scanf("%f",&kisak);
  printf("\tUZUN KENARI GIRINIZ: ");
  scanf("%f",&uzunk);
  
  alan=kisak*uzunk;
  cevre=2*(kisak+uzunk);
  printf("\n\n\n");
  printf("\tALAN: %f\n\n",alan);
  printf("\tCEVRE: %f",cevre);
  
  

  
  getchar();
  getchar();
  return 0;
}
