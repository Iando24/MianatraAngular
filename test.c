#include <stdio.h>

void afficheTab(int);

void main()
{ 
/*declaration des variable*/
//	int i, nb ;
//	int NBNOTES = 10;
//	float note [NBNOTES] ;
//	float somme, moy ;
/* lecture du tableau note */
//	printf ("donnez vos %d notes : ", NBNOTES) ;
//	for ( i = 0 ; i<NBNOTES ; i++)
//		scanf ("%f", &note[i]) ;
/* calcul de la moyenne dans moy */
//	somme = 0. ;
//	for (i = 0 ; i<NBNOTES ; i++)
//		somme = somme + note[i] ;
//	moy = somme / NBNOTES ;
// on suppose nbNotes non nul
/* comptage dans nb du nombre de notes supérieures à moy */
//	nb = 0 ;
//	for (i = 0 ; i<NBNOTES ; i++)
//		if (note[i] > moy) nb++ ;
/* affichage de moy et de n */
//	printf ("moyenne = %7.2f\n", moy) ;
//	printf ("il y a %d notes supérieures à cette moyenne\n", nb) ;
	afficheTab(20);
}


void afficheTab(int n)
{
	float tab[n];
	for(int i = 0;i<n;i++)
		printf("%lf\n",tab[i]);
}
