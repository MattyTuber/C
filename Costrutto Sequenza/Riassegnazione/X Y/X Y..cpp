#include <stdio.h>

int main()

{
	
	int x;
	
	int y;
	
	int app;
	
	printf("Inserisci il valore di X:");
	scanf("%i", &x);
	
	printf("Inserisci il valore di Y:");
	scanf("%i", &y);
	
	app = x;
	
	x = y;
	
	y = app;
	
	printf("X= %i", x);
	
	printf("\nY= %i", y);
	
}
