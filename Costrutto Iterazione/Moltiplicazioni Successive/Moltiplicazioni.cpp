/*Determinare il valore di x^y (x e y sono numeri interi) utilizzando moltiplicazioni
successive.*/

#include <stdio.h>

int main()

{
	
	int i, x, y, app;
	
	printf("Inserire il valore di X: ");
	scanf("%d", &x);
	
	printf("Inserire il valore di Y: ");
	scanf("%d", &y);
	
	app = x;
	
	for (i=1; i<=y; i++)
	
	{
		
		x = x * app;
		
		printf("\n%d", x);
		
	}
	
	return 0;
	
}
