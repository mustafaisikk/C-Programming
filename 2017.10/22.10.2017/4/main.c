#include <stdio.h>
#include <stdlib.h>

int main()
{
  int s1,s2,s3,perf,ort;
    
  printf("\n\n");  
  printf("\t*******OGRENCÝ BÝLGÝ SÝSTEMÝ*******\n\n\n\n");
  printf("\tOGRENCININ 1.SINAV NOTU: ");
  scanf("%d",&s1);
  printf("\n\n");
  printf("\tOGRENCININ 2.SINAV NOTU: ");	
  scanf("%d",&s2);
  printf("\n\n");
  printf("\tOGRENCININ 3.SINAV NOTU: ");
  scanf("%d",&s3);
   printf("\n\n");
  printf("\tOGRENCININ PERFORMANS NOTU: ");
  scanf("%d",&perf);
  ort=(s1+s2+s3+perf)/4;
  printf("\t********************************************");
  printf("\n\n");
  printf("\tOGRENCININ ORTALAMASI: %d",ort);
   printf("\n\n\n\n");
  if(ort<=50)
  {
    printf("\tOGRENCI GECEMEZ");         
             }
  else
  {
      printf("OGRENCI GECEr");
      }
  
  
  
  
  getchar();
  getchar();
  
  
  
  
  
  
  
  
  
  return 0;
}
