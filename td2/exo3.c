#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

typedef  struct element{int val; struct element* next ;}element;
typedef element* liste;

//Fonctions d’ajout : ajout `a la fin, ajout tri ́e. 
//Pour la derni`ere insertion, on  ́ecrira au
//pr ́ealable une fonction qui v ́erifie que la liste est bien tri ́ee.
//Pour tester ces fonctions, on cr ́eera une liste en
//ajoutant des entiers g ́en ́er ́es al ́eatoirement entre 0 et n 
//jusqu’`a ce que 0 soit tir ́e.

liste initliste(liste l)
{
	l=NULL;
	return(l);
}

int listevide(liste l)
{
	return l==NULL;
	
}
liste ajouterelemdebut(liste l,int val)
{
	element *elt=malloc(sizeof(element));
	elt->val=val;
	elt->next=l;
	return(elt);
	;
}
liste ajouterfin(liste l,int val)
{
	if(listevide(l)==1){return(ajouterelemdebut(l,val));}
	else 			{l->next=ajouterfin(l->next,val);return(l);}
	
}

liste ajouttrie(liste l,int v)
{
	if((listevide(l)) || (v <= l->val)){return(ajouterelemdebut(l,v));}
	
	l->next=ajouttrie(l->next,v);
	return(l);
}

void afficheliste(liste l)
{
	if(l!=NULL)
	{
		printf("valeur: %d\n",l->val);
		afficheliste(l->next);
	}
	
	
} 
int main()
{
	liste l=NULL;
	l=initliste(l);
	
	l=ajouterelemdebut(l,1);
	l=ajouterelemdebut(l,2);
	l=ajouterelemdebut(l,5);
	l=ajouterfin(l,0);
	l=ajouttrie(l,4);
	
	if(listevide(l)==0)
	printf("liste remplie \n");
	else 
	printf("liste vide \n");
	
	afficheliste(l);
	return (0);
}

