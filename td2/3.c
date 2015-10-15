#include <stdio.h>
#include <math.h>

void permute(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}


int main()
{
	int a,b;
	a=5;
	b=6;
	
	permute(&a,&b);
	
	printf("a=%d \n",a);
	printf("b=%d \n",b);
	return 0;
}
