#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j;
  e:
  printf("SON SAYI: ");
  scanf("%d",&j);
  for(i=0;i<=j;i++)
  {
  if(i%2==0 && i%7==0)
  {
  printf("%d\n",i);         
  }                   
 
  }
  goto e;
  getchar();
  getchar();
  
  return 0;
}
