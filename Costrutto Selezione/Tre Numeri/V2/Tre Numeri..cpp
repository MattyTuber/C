#include <stdio.h>

int main()

{
	
	int x, y, z;
	
	printf("Inserire il valore di X: ");
	scanf("%d", &x);
	
	printf("Inserire il valore di Y: ");
	scanf("%d", &y);
	
	printf("Inserire il valore di Z: ");
	scanf("%d", &z);
	
	if ((x == y) && (y == z))
		printf("I numeri sono tutti uguali");	
	else
		if ((x == y)||(y == z)||(x == z))
			printf("Due numeri sono uguali e uno diverso");	
		else
			printf("Tutti i numeri sono diversi");
			
	return 0;
}
