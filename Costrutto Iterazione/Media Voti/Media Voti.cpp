/*Dati i voti riportati da N studenti in una prova, stabilisci quanti sono insufficienti e quanti
sufficienti. Il programma deve anche calcolare la media dei voti.*/

#include <stdio.h>

int main()

{
	
	int i, n, voto, somma, suff, insuff;
	
	float media;
	
	printf("Inserire il numero di studenti: ");
	scanf("%d", &n);
	
	for (i=1; i<=n; i++)
	
	{
		
		printf("Inserire un voto: ");
		scanf("%d", &voto);
		
		if (voto >= 6)
		
			suff++;
			
		else
		
			insuff++;
			
		somma += voto;		
		
	}
	
	printf("\nI voti sufficiente sono stati: %d", suff);
	
	printf("\n\nI voti insufficienti sono stati: %d", insuff);
	
	media = somma / n;
	
	printf("\n\nLa media dei voti e' stata: %.2f", media);
	
	return 0;
	
}
