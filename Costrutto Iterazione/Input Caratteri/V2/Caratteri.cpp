//Acquisire una serie di caratteri e stamparli finch� non viene immesso "*", senza per� stamparlo.

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
