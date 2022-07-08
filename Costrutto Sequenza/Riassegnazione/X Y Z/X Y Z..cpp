#include <stdio.h>

int main()

{
	
	int x;
	
	int y;
	
	int z;
	
	int app1;
	
	int app2;
	
	printf("Inserisci il valore di X:");
	scanf("%i", &x);
	
	printf("Inserisci il valore di Y:");
	scanf("%i", &y);
	
	printf("Inserisci il valore di Z:");
	scanf("%i", &z);
	
	app1 = x;
	
	x = z;
	
	app2 = y;
	
	y = app1;
	
	z = app2;
	
	printf("X= %i", x);
	
	printf("\nY= %i", y);
	
	printf("\nZ= %i", z);
	
}
