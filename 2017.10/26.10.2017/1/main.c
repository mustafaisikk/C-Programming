#include <stdio.h>
#include <stdlib.h>

int main()
{ int a,i,faktor;
e:
faktor=1;
	printf("\n");
  printf("SAYINIZ: ");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
  faktor=(faktor*i);                
  }
  printf("FAKTORIYELI: %d",faktor);
  goto e;
  getchar();
  getchar();
  return 0;
}
