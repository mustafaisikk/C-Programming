#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,i,toplam=0;  
  printf("SAYINIZ: ");
  scanf("%d",&a);
  
  for(i=1;i<=a;i++)
  {
  toplam+=i;
}
  printf("TOPLAM: %d",toplam);
  
  
  getche();
  	
  return 0;
}
