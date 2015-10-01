#include "stdio.h"

int main()
{
	
	float d,e,n,i,t,meme;
	e=0.000000001;
	t=0.0;
	d=1.0;
	
	for (i = 1.0; e < d; i++)
	{
		meme=t;
		t=t+(1.0/(i*i));
		d=t-meme;
		printf("%f \n",t);
	}
	printf("%f",t);
	return(0);
}
