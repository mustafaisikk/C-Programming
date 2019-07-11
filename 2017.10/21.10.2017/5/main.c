#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,ort;
    
    printf("\n\n\n");
    printf("\tOGRENCININ 1.SINAVI: ");
    scanf("%d",&a);
    printf("\n");
    printf("\tOGRENCININ 2.SINAVI: ");
    scanf("%d",&b);
    printf("\n");
    printf("\tOGRENCININ 3.SINAVI: ");
    scanf("%d",&c);
    printf("\n");
    printf("\tOGRENCININ PERFORMANS NOTU: ");
    scanf("%d",&d);
    ort=(a+b+c+d)/4;
    printf("\n\n\n");
    printf("\tOGRENCININ ORTALAMASI: %d",ort);

    getchar();
    getchar();

  return 0;
}
