#include <stdio.h>
#include <stdlib.h>

int main()
{
  float maas,kdv,net;
  
   printf("\n\n\n");
   printf("\t*******MAAS HESABI*******\n\n\n\n\n\n\n");
   printf("\tMAASI GIRINIZ: ");
   scanf("%f",&maas);
   kdv=(maas*12)/100;
   net=maas+kdv;
   printf("\n\n");
   printf("\tSON MAAS: %f",net);
   
   
   getchar();
   getchar();
   
  return 0;
}
