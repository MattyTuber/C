//Acquisire una serie di caratteri e stamparli finchè non viene immesso "*", senza però stamparlo.

#include <stdio.h>

int main()

{
	
	char carattere;
	
	do {
		
		printf("Inserire un carattere: ");
		scanf("%c", &carattere);
		
		if (carattere != '*')
	
		printf("%c\n", carattere);
		
		getchar();
		
	} while (carattere != '*');
	
	return 0;
	
}
