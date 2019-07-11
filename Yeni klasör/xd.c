#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fun(int m){
	if(m==4){
	return m;	
	}
	else return 2*fun(m+1);
}
int main(int argc, char *argv[]) {
		printf("%d",fun(2));
	return 0;
}
