#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a;  
  
  e:
  printf("\n\n\n\n");
  printf("\tSAYIYI GIRINIZ: ");
  scanf("%d",&a);
  printf("\n\n");
  
  if(a<0)
  {
  printf("\tHATALI SAYI GÝRDÝNÝZ");       
  }
  else
  {
  if(a%2==0)
  {
  printf("\tSAYINIZ CIFT");          
  }
  else
  {
  printf("\tSAYINIZ TEK");
  }
}
  goto e;
  
  getchar();	
  getchar();
  return 0;
}
