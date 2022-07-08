#include<stdio.h>

#define range 0.00001

int main()

{
	
	float f1, f2;
	
	printf("Inserire un numero decimale --> ");
	scanf("%f", &f1);
	
	printf("Inserire un altro numero decimale --> ");
	scanf("%f", &f2);
	
	if (((f1 - range) < f2) && ((f1 + range) > f2))
	
		printf("Uguali");
		
	else
	
		printf("Diversi");
		
	return 0;	
	
}
