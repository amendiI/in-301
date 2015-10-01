#include "stdio.h"

int main()
{
	int i,j,n,m,tn,tm,nmax;
	
	printf("entrer une valeur entière pour nmax\n");
	scanf("%d",&nmax);
	
	tn=0;
	tm=0;
	
	for(n = 2; n <= nmax ;n++)
	{
		for(m=1 ; m < n ; m++)
		{
			for (i = 1; i < n ;i++)
			{
				if(n%i==0){tn=tn+i;}
				if(m%i==0){tm=tm+i;}
				
				
			}
			tm=tm-m;
			if(tn==m && tm==n)	{printf("%d et %d sont amis\n",n,m);}
		 }
	}
	

	
	return(0);
}
