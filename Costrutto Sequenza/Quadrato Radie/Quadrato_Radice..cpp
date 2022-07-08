/*Dato in input un numero calcolare quadrato e radice*/
#include <stdio.h>
#include <iostream>
#include <math.h>

int main()

{
	
	int camadonna;
	float numero,radice,quadrato;
	
	printf("Inserire un numero: ");
	scanf("%f", &numero);
	
	radice = sqrt(numero);
	
	quadrato = pow(numero,2);
	
	printf("Quadrato: %f", quadrato);
	
	printf("\nRadice: %f", radice);
	
	getchar();
	getchar();
	
}
