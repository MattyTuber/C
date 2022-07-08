#include <stdio.h>
#include <math.h>

int main()

{
	
	int base;
	
	int lato;
	
	float perimetro;
	
	float altezza;
	
	float area;
	
	printf("Inserire il valore della base:");
	scanf("%i", &base);
	
	printf("Inserire il valore del lato:");
	scanf("%i", &lato);
	
	perimetro = 2 * lato + base;
	
	altezza = sqrt (pow (lato, 2) - pow (base / 2, 2));
	
	area = base * altezza / 2;
	
	printf("Perimetro: %f", perimetro);
	
	printf("\nArea: %f", area);
	
}
