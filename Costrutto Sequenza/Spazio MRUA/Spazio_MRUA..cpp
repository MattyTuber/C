#include <stdio.h>
#include <math.h>

#define a 5

int main()

{
	
	int t;
	
	float s;
	
	printf("Inserire un tempo: ");
	scanf("%d", &t);
	
	s = 0.5 * a * pow(t,2);
	
	printf("Spazio percorso: %f", s);
	
	return 0;
	
}
