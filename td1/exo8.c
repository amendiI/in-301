#include "stdio.h"

int main()
{	
	int un,i;
	
	scanf("%d",&un);

	
	for (i = 0; un != 1; i++)
	{
		if(un%2==0) {un=un/2;}
		else 		{un=3*un+1;}
		
	}
	printf("%d\n",i);
	
	return(0);
}
