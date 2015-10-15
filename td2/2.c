#include <stdio.h>
#include <math.h>


int main()
{
	
	char tab [10];
	char(*p)[10]= &tab;
	
	printf("taille de p, %d \n",sizeof(p));
	printf("taille de *p, %d \n",sizeof(*p));
	printf("taille de *p[2], %d \n",sizeof(*p)[2]);
	printf("taille de &*p[2], %d \n",sizeof &(*p)[2]);
	
	return 0;
}

