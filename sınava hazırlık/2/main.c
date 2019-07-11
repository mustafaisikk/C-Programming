#include <stdio.h>
#include <stdlib.h>


struct dugum{
 int veri;
 struct dugum *p;
};
struct dugum *ilk;

struct dugum * ekle(struct dugum *,int);
void function(struct dugum *);

int main(int argc, char* argv[])
{
   int d[]={1,2,3,4,5,6,7,10,17,20};
   struct dugum *yedek;
   int i,sayac=0;
   yedek=ilk=ekle(ilk,d[0]);

   for(i=1;i<6;i++)
    ilk=ekle(ilk,d[i]);

    /*
   while(yedek->veri!=6)
   {
     sayac++;
     yedek=yedek->p;
   }
   printf("sirada %d kisi vardir",sayac);
   */

 /*  
   while(yedek!=NULL)
   {
    printf("%d\n",yedek->veri);
    yedek=yedek->p;
   } */
   
   function(yedek);

   getchar();
   getchar();
   return 0;
}
void function(struct dugum * ilk)
{
 if(ilk== NULL) return;
  printf("%d\n", ilk->veri);

  if(ilk->p != NULL )
   function(ilk->p->p);

  printf("%d\n",ilk->p->veri);
}

struct dugum * ekle(struct dugum *x ,int y)
{
  struct dugum * temp;
  temp=malloc(sizeof(struct dugum));
  temp->veri=y;
  temp->p=NULL;

  if(x!=NULL)
  {
  x->p=temp;
  x=x->p;
  }
  else
  x=temp;
  return x;
}
