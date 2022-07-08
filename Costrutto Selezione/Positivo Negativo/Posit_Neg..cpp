#include <stdio.h>

int main()

{
	
	int num;
	
	printf("Inserire un numero: ");
	scanf("%d", &num);
	
	if (num >= 0)
	
		printf("Il numero e' positivo");
	
	else
		
		printf("Il numero e' negativo");
	
	return 0;		
	
}
