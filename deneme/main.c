#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char dizi[10][10]={"ali","mustafa","ayla","ayþe","ali","mustafa","ahmet","ali","ahmet","ali"};
	int i,j;
  for(i=0;i<sizeof(dizi);i++){

                char gecici2=dizi[i];

                for (j=0;j<i;j++){

                    if(dizi[j]==gecici2) {
                        i++;
                    }

                }

            printf("%c",puts(dizi[i]));

        }
	
	return 0;
}
