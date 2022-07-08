#include <stdio.h>

int main()

{
	
	int x, y;
	
	printf("Inserire un numero: ");
	scanf("%d", &x);
	
	printf("Inserire un altro numero: ");
	scanf("%d", &y);
	
	if (x > y)
		
		printf("Il numero maggiore e': %d", x);
	
	else
		
		printf("Il numero maggiore e': %d", y);
	
	return 0;		
	
}
