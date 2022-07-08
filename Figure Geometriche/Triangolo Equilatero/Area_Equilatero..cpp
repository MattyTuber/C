#include <stdio.h>
#include <math.h>

int main()

{
	
	int lato;
	
	float altezza;
	
	float area;
	
	printf("Inserisci il valore del lato:");
	scanf("%i", &lato);
	
	altezza = sqrt (pow (lato, 2) - pow (lato / 2, 2));
	
	area = altezza * lato / 2;
	
	printf("Area: %f", area);
	
}
