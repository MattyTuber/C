#include <stdio.h>

int main()

{
	
	int num, calcolo, resto;
	
	printf("Inserire un numero: ");
	scanf("%d", &num);
	
	calcolo = num / 2;
	
	resto = num - calcolo * 2;
	
	if (resto == 0)
	
		printf("Il numero e' pari");
		
	else
	
		printf("Il numero e' dispari");
		
	return 0;	
	
}
