#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    tur:1,999   mat:3,998   sos:1   fen:2,999   taban:100,16
    */
    
    	
    float tur,mat,sos,fen,taban,a,b,c,d,sonuc;
    
    printf("\t*********YGS SONUC HESABI*********\n\n\n\n");
    printf("\tOGRENSININ TURKCE NETI: ");
    scanf("%f",&a);
    printf("\n");
    printf("\tOGRENCININ MATAMATIK NETI: ");
    scanf("%f",&b);
    printf("\n");
    printf("\tOGRENCININ SOSYAL NETI: ");
    scanf("%f",&c);
    printf("\n");
    printf("\tOGRENCININ FEN NETI: ");
    scanf("%f",&d);
    
    tur=1.999*a;
    mat=3.998*b;
    sos=1*c;
    fen=d*2.999;
    taban=100.16;
    
    sonuc=taban+fen+mat+sos+tur;
    printf("\n\n\n\n");
    printf("\tSONUC: %f",sonuc);
    
    
    getchar();
    getchar();  
    
    
    
    
    
    
    
    
    
  return 0;
}
