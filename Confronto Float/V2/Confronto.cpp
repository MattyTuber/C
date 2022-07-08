#include<stdio.h>
#include<math.h>

int main()

{
	
	float f1, f2, range, differenza;
	
	range = pow(10, -6);
	
	printf("Inserire un numero decimale --> ");
	scanf("%f", &f1);
	
	printf("Inserire un altro numero decimale --> ");
	scanf("%f", &f2);
	
	differenza = f1 - f2;
	
	if (((range * -1) > differenza) && (differenza > range))
	
		printf("Uguali");
		
	else
	
		printf("Diversi");
		
	return 0;
	
}
