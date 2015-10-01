#include "stdio.h"

int main()
{
	while(1)
	{	
		int i,n,a;
		scanf("%d",&n);
		a=0;
		
		for (i = 2; i <  n; i++)
		{
			if(n%i==0)
			{
				a=1; 
			}
		}
		
		if (a)
		{
			printf("%d n'est pas un nombre premier",n);
		}
		else
		{
			printf("%d est un nombre premier",n);
		}
	}
	
	return(0);
}
