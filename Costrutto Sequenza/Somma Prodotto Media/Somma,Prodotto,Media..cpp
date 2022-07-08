#include <stdio.h>

int main()
{
	int x;
	int y;
	int z;
	int somma;
	int prodotto;
	
	float media;
	
	printf("Inserisci il valore di X:");
	scanf("%d", &x);
	
	printf("Inserisci il valore di Y:");
	scanf("%d", &y);
	
	printf("Inserisci il valore di Z:");
	scanf("%d", &z);
	
	somma = 10;
	
	printf ("Prova --> %d\n", somma);
	
	somma = x + y + z;
	
	prodotto = x * y * z;
	
	media = somma / 3;
	
	printf("Somma: %d", somma);
	
	printf("\nProdotto: %d", prodotto);
	
	printf("\nMedia: %f", media);
}
