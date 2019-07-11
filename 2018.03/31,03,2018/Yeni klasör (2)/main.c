#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node* start=NULL;
struct node* temp=NULL;

void hazirdizi(int x){
	
	int i;
	
	
	for(i=1;i<=x;i++){
		
		if(start==NULL)
		{
			struct node* basaekle=(struct node* )malloc(sizeof(struct node));
			start=basaekle;
			basaekle->data=i;
			basaekle->next=start;
			
		}
		
		else
			{
				temp=start;
				struct node* sonaekle=(struct node* )malloc(sizeof(struct node));
					sonaekle->data=i;
				sonaekle->next=start;
				while(temp->next!=start){
					temp=temp->next;
				}
				temp->next=sonaekle;
			
			}
	}
}

void yazdir(){
	
	temp=start;
	while(temp->next!=start){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("%d\n",temp->data);
	
}

int main(int argc, char *argv[]) {
	
	int boyut,a=1;
	
while(a==1){
		printf("MASA KAC KISILIK OLSUN: (CIKIS ICIN 0'A TIKLAYINIZ)");
	scanf("%d",&boyut);
	if(boyut==0)
	break;
	hazirdizi(boyut);

	
	while(start->next!=start)
	{		
			start->next=start->next->next;
			start=start->next;
			yazdir();
	}
	free(start);
}
printf("\n\nCIKIS YAPTINIZ TESEKKURLER...");
getchar();
getchar();
	return 0;
}
