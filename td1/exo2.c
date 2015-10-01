#include "stdio.h"

int main()
{
	int entree;
	int j,h,min,sec;
	char p
	scanf("%d",&entree);
	
	h=entree/3600;
	min=(entree-h*3600)/60;
	sec=(entree-h*3600)-(min*60);

	printf("%d secondes font:\n",entree);
	
	
	
	if (h>1)	;
	if (sec>1)	;
	if (min>1)	;
	
	printf("%d\n",h);
	printf("%d\n",min);
	printf("%d\n",sec);

	return 0;
}
