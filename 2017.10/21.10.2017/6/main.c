#include <stdio.h>
#include <stdlib.h>

int main()
{
  
    
  int a,b,net,toplam,tutar;
  printf("\n\n\n");
  printf("\tBAGAJ AGIRLIGI: ");
  scanf("%d",&a);
  printf("\tEL CANTASININ AGIRLIGI: ");
  scanf("%d",&b);
  toplam=a+b;
  printf("\n\n");
  printf("\tTOPLAM KG: %d\n",toplam);
  printf("\n");
  net=(toplam-23);
  tutar=(net*5);
  printf("\tODENECEK TUTAR: %d",tutar);	
  
  
  
  getchar();
  getchar();
  return 0;
}
