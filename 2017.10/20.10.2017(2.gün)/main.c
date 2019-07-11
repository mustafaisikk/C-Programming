#include <stdio.h>
#include <stdlib.h>

int main()
{
  char kitapadi[10],yazari[10],sayfasayisi[5],basimtarihi[10],basimevi[10],tur[10];
  
  printf("KÝTAP ADI : ");
  scanf("%s",kitapadi);
  printf("YAZARI : ");  
  scanf("%s",yazari);  
  printf("SAYFA SAYISI : ");  
  scanf("%s",sayfasayisi);
  printf("BASIM TARIHI : ");
  scanf("%s",basimtarihi);
  printf("BASIM EVI : ");
  scanf("%s",basimevi);
  printf("TURU : ");
  scanf("%s",tur);
  
  printf("\n");
  printf("GÝRÝLEN KÝTABIN\n\n");  
  printf("ADI : %s \n",kitapadi);
  printf("YASARI : %s \n",yazari);
  printf("SAYFA SAYISI : %s \n",sayfasayisi);
  printf("BASIM TARIHI : %s \n",basimtarihi);
  printf("BASIM EVI : %s \n",basimevi);
  printf("TUR : %s \n",tur);
     
  getchar();
  getchar();
   
	
  return 0;
}
