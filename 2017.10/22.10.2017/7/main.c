#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a;  
 e:
  printf("\n\n");
  printf("OGRENCI NOTU: ");
 scanf("%d",&a);
 if(a>=0 && a<50)
 {
 printf("NOTU: FF");
 }
 if(a>=50 && a<60)
 {
 printf("NOTUNUZ: DD");
 }
 if(a>=60 && a<70)
 {
 printf("NOTUNUZ : CC");         
 }
 if(a>=70 && a<85)
 {
 printf("NOTUNUZ: BB");
          }
 if(a>=85 && a<=100)
 {
 printf("NOTUNUZ: AA");         
 }
 
 goto e;
 getchar();
 getchar();
 	
  return 0;
}
