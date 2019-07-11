#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int a;
	e:
		printf("\n\n");
	printf("\tGUNUN KODU: ");
	scanf("%d",&a);
	printf("\n");
	
	switch(a) 	
	{
	  
	case 1:printf("\tPAZARTESI");
	break;
	case 2:printf("\tSALI");
	break;
	case 3:printf("\tCARSAMBA");
	break;
	case 4:printf("\tPERSEMBE");
	break;
	case 5:printf("\tCUMA");
	break;
	case 6:printf("\tCUMARTESI");
	break;
	case 7:printf("\tPAZAR");
	break;
	
	default:printf("\tHATALI GIRIS YAPTINIZ");
break;
}
printf("\n");
goto e;
	return 0;
}
