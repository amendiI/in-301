#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


typedef struct tableau {int taille;int tab[100];}tableau;

int aleaint(int n)
{
	int a;
	
	a=rand()%n;
	return(a);
}

tableau inittab(tableau a)
{
	int i;
	a.taille=10;
	
	for (i = 0; i < a.taille; i++)
	{
		a.tab[i]=aleaint(20);
	}
	
	return(a);
}

void affichetab(tableau a)
{
	int i;
	
	printf("taille du tab:%d \n",a.taille);
	
	for (i = 0; i < a.taille; i++)
	{
		printf("valeures du tableau pour tab[%d] :%d \n",i,a.tab[i]);
	}
	
}

void produittab(tableau a)
{
	int i,p;
	p=1;
	
	for (i = 0; i < a.taille; i++)
	{
		p=p*a.tab[i];
	}
	
	printf("produit du tableau:%d \n",p);
}

int minimum(tableau a)
{
	int i,min;
	min=a.tab[0];
	
	for (i = 0; i < a.taille; i++)
	{
		if (a.tab[i]<min)
		{
			min=a.tab[i];
		}
	}
	printf("le minimum est:%d \n",min);
	return (min);
}

tableau dd(tableau a)
{
	int i;
	
	for (i = a.taille; i >= 0; i--)
	{
		a.tab[i+1]=a.tab[i];
	}
	a.tab[0]=0;
	a.taille++;
	return (a);
}

tableau tri (a)
{
	int i,j,plop;
	
	for (i = 0; i < a.taille; i++)
	{
		for (j = 0; j < ; j++)
		{
			
		}
		
	}
	
	
	return(a);
}
int main()
{
	tableau a;
	int min;
	
	srand(time(NULL));
	
	a=inittab(a);
	affichetab(a);
	
	a=dd(a);
	affichetab(a);
	
	return(0);
}
