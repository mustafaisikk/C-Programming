#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   int a,b,c; 
    
   printf("SIRASI ÝLE 3 SAYI GIRINIZ: ");
   scanf("%d %d %d",&a,&b,&c);
   
   
   if(a>b&&a>c)
   printf("EN BUYUK SAYI: %d",a);
   else
   if(b>a&&b>c)
   printf("EN BUYUK SAYI: %d",b);
   else
   if(c>a&&c>b)
  printf("EN BUYUK SAYI: %d",c); 
   
   
   
   
   
   getchar();
   getchar();
    return EXIT_SUCCESS;
}
