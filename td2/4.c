#include <stdio.h>
#include <math.h>

void reinitPointeur(int* p)	{*p = NULL;}

int main()
{
	int a = 11;
	int* p = &a;
	reinitPointeur(p);
	printf("p*=%d \n",*p);
}
