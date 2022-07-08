#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897932384626433832795028841971

int main()

{
	
	float raggio;
	
	float circonferenza;
	
	float area;
	
	printf("Inserire il valore del raggio:");
	scanf("%f", &raggio);
	
	circonferenza = 2 * PI * raggio;
	
	area = PI * pow (2, 2);
	
	printf("Circonferenza: %f", circonferenza);
	
	printf("\nArea: %f", area);
	
}
