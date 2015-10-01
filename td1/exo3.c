#include "stdio.h"

int main()
{
	int X,Y,reste,tot;
	reste=0;
	scanf("%d",&X);
	scanf("%d",&Y);
	
	printf("%d*%d \n",X,Y);
	
	while (X>1)
	{
		if (X%2==0)
		{
			X=X/2;
			Y=2*Y;
		}
		else
		{
			X=X-1;
			reste=Y+reste;
		}
	
	
		printf("= %d x %d + %d \n",X,Y,reste);
		tot=Y+reste;
		printf("=%d",tot);
		
	}
	return(0);	
}
