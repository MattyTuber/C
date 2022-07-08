#include <stdio.h>

int main()

{
	
	int num;
	
	printf("Inserisci un numero: ");
	scanf("%d", &num);
	
	if (num > 0)
		
		printf("Il numero %d e' positivo", num);
		
	else
		
		if (num == 0)
		
			printf("Il numero %d e' nullo", num);
		
		else
			
			printf("Il numero %d e' negativo", num);		
	
}
