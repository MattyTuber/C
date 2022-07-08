#include <stdio.h>

int main()

{
	
	int num;
	
	printf("Inserire un numero: ");
	scanf("%i", &num);
	
	num = num % 2;
	
	if (num == 0)
	
		printf("Il numero e' pari");
		
	else
	
		printf("Il numero e' dispari");
		
	return 0;	
	
}
