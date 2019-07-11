#include<stdio.h>
#include<stdlib.h>



struct dugum
{
 int kat,us;
 struct dugum *p;
};

struct dugum *fonk1,*fonk2;
struct dugum * dugumolustur(int ,int );
void yazdir(struct dugum *);
struct dugum * toplason(struct dugum *,struct dugum *);

int main()
{
 // 3X^2+5X+5
 // 8X^2+10X+7
  struct dugum *toplam;

  fonk1=dugumolustur(3,2);
  fonk1->p=dugumolustur(5,1);
  fonk1->p->p=dugumolustur(5,0);

  yazdir(fonk1);

  fonk2=dugumolustur(8,2);
  fonk2->p=dugumolustur(10,1);
  fonk2->p->p=dugumolustur(7,0);

  printf("\n");
  yazdir(fonk2);

  toplam=toplason(fonk1,fonk2);
  printf("\n");
  yazdir(toplam);


  getchar();
  getchar();

  return 0;
}

struct dugum * toplason(struct dugum *x,struct dugum *y)
{
   struct dugum *sonuc,*yedek;
   yedek=sonuc=malloc(sizeof(struct dugum));

   while(x)//esit fonk
   {
   sonuc->kat=x->kat+y->kat;
   sonuc->us=x->us;

   if(x->p!=NULL)
   sonuc=sonuc->p=malloc(sizeof(struct dugum));
   x=x->p;
   y=y->p;
   }
   return yedek;

}



void yazdir(struct dugum *x)
{

while(x)
  {
  if(x->us!=0 && x->us!=1)
  {
  printf("%dX^%d",x->kat,x->us);
  printf("+");
  }
  else if(x->us==1)
  {
  printf("%dX",x->kat);
  printf("+");
  }
  else
  printf("%d",x->kat);

  x=x->p;
  }

}


struct dugum * dugumolustur(int x,int y)
{
   struct dugum *ilk;
   ilk=malloc(sizeof(struct dugum));
   ilk->kat=x;
   ilk->us=y;
   ilk->p=NULL;
   return ilk;

}


