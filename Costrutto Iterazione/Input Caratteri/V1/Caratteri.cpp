//Acquisire una serie di caratteri e stamparli finchè non viene immesso "*".

#include <stdio.h>

int main()

{
	
	char carattere;
	
	do {
		
		printf("Inserire un carattere: ");
		scanf("%c", &carattere);
	
		printf("%c\n", carattere);
		getchar();
		
	} while (carattere != '*');
	
	return 0;
	
}
