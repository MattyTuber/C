#include <stdio.h>

int main()

{
	
	float num, somma;
	
	char risp;
	
	somma = 0;
	
	do {
		
		printf("Inserire un numero: ");
		scanf("%f", &num);
		
		if (num < 0)
		
			num = num * -1;
		
		somma += num;
		
		printf("Vuoi continuare? ");
		getchar();
		scanf("%c", &risp);
		
	}while ((risp !='N') && (risp!='n'));
	
	printf("La somma e': %.2f", somma);
	
	return 0;
	
}
