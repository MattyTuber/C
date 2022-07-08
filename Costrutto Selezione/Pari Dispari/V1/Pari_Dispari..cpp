#include <stdio.h>

int main()

{
	
	int valore, resto;
	
	float calcolo, num;
	
	printf("Inserire un numero: ");
	scanf("%f", &num);
	
	calcolo = num / 2;
	
	valore = num / 2;
	
	resto = (calcolo - valore) * 2;
	
	if (resto == 0)
	
		printf("Il numero e' pari");
		
	else
	
		printf("Il numero e' dispari");
		
	return 0;	
	
}
