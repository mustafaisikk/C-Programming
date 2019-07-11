#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* sol;
	struct node* sag;
};

struct node* sayi=NULL;

struct node* dugumolustur(int x){
	struct node* temp=malloc(sizeof(struct node));
	temp->data=x;
	temp->sag=NULL;
	temp->sol=NULL;
	return temp;
}

struct node* agacveriekle(struct node* x,int y){
	struct node* gecici=x;
	while(1){
		
		if(gecici==NULL){
		gecici=dugumolustur(y);
		
		return gecici;
	}
	else if(y>=gecici->data)
	{
		if(gecici->sag==NULL){
			gecici->sag=dugumolustur(y);
			return gecici;
		}
		else
		gecici=gecici->sag;
	}
	else if(y<gecici->data){
		if(gecici->sol==NULL){
			gecici->sol=dugumolustur(y);
			return gecici;
		}
		else
		gecici=gecici->sol;
	}
	}
}


struct node* agacveriekle2(struct node* x,int y){
	
	if(x==NULL)
	return dugumolustur(y);
	
	else if(y>=x->data)
		x->sag=agacveriekle2(x->sag,y);
	else if(y<x->data)
		x->sol=agacveriekle2(x->sol,y);
		return x;
}
void onkok(struct node* x)
{
	
  if(x!=NULL)
  {
   printf("%d\n",x->data);
   onkok(x->sol);
   onkok(x->sag);
  }
}
void ortakok(struct node* x){
	if(x!=NULL){
		ortakok(x->sol);
		printf("%d\n",x->data);
		ortakok(x->sag);
	}
}
void sonkok(struct node* x){
	if(x!=NULL){
		sonkok(x->sol);
		sonkok(x->sag);
		printf("%d\n",x->data);
	}
}
int minbul(struct node* x){
	if(x->sol!=NULL)
	return minbul(x->sol);
	else
	return x->data;
}
int arama(struct node* x,int y){
	if(x!=NULL){
		if(x->data==y)
		return 1;
		else{
			return arama(x->sol,y) || arama(x->sag,y);
		}	
	}
	else
	return 0;
}
int dugumsayisi(struct node* x){
	if(x!=NULL){
		return dugumsayisi(x->sol)+1+dugumsayisi(x->sag);
	}
}
int main(int argc, char* argv[])
{
		int i=0,a;
	/*
		scanf("%d",&a);
		while(a){
         sayi=agacveriekle2(sayi,a);
         scanf("%d",&a);
        
	}
	*/
int d[]={25,14,40,7,23,34,48,5,10,17,24,36,7,23};

   for(i=0;i<14;i++)
    sayi=agacveriekle2(sayi,d[i]);
		/*   while(sayi->sol!=NULL)
         {
            printf("sayi deger %d\n",sayi->data); i++;
            if(i==2)
            printf("sayi deger %d\n",sayi->sag->data); //23 
            sayi=sayi->sol;
         }
          printf("sayi deger %d\n",sayi->data);*/
         printf("\n");
		  onkok(sayi);
         printf("\n");
			ortakok(sayi);
			         printf("\n");
		sonkok(sayi);
	         printf("\n");
		printf("%d minimum deger",minbul(sayi));
		  printf("\n");
		  printf("%d",arama(sayi,48));
		  printf("\n");
		  printf("%d",dugumsayisi(sayi));
	
        getchar();
        return 0;
}

