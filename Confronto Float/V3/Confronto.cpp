#include <stdio.h>
#include <math.h>

#define epsilon 0.00001

int main()

{
	
	float f1, f2;
	
	printf("Inserire un numero decimale --> ");
	scanf("%f", &f1);
	
	printf("Inserire un altro numero decimale --> ");
	scanf("%f", &f2);
	
	if (fabs(f1 - f2) < epsilon)
	
		printf("Uguali");
	
	else
	
		printf("Diversi");
		
	return 0;
	
}
