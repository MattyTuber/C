#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()

{

	float x;

	float ZERO = 0;

	float a;

	printf("Inserire il valore di X:");
	scanf("%f", &x);

	a = ZERO - x;

	printf("a: %f", a);

	float y;

	float TOP = 1000;

	float b;

	printf("\nInserisci il valore di Y:");
	scanf("%f", &y);

	b = TOP - y;

	printf("b: %f", b);

	float c;

	c = a * b;

	printf("\nc: %f", c);

}
