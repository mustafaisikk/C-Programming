#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *sonraki;
};
int main() {
	
	int a,b;
	
	struct node *ilkdugum=malloc(sizeof(struct node));
	
	struct node *ikincidugum=malloc(sizeof(struct node));
	
	printf("ilk elemani giriniz: ");
	scanf("%d",&a);
	printf("ikinci elemani giriniz: ");
	scanf("%d",&b);
	ilkdugum->data=a;
	ilkdugum->sonraki=ikincidugum;
	ikincidugum->data=b;
	ikincidugum->sonraki=NULL;
	printf("%d\n%d",ilkdugum->data,ikincidugum->data);
	
	getchar();
	getchar();

	return 0;
}
