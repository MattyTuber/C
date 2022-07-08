#include <stdio.h>
#include <math.h>

#define g 9.81

int main()

{
	
	float t;
	
	float s;
	
	printf("Inserire un tempo: ");
	scanf("%f", &t);
	
	s = 0.5 * g * pow(t,2);
	
	printf("Spazio percorso: %f", s);
	
	return 0;
	
}
