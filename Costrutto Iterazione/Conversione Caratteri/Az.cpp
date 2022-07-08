//Acquisire una serie di caratteri e convertirli finchè non viene immesso "*"

#include <stdio.h>

int main()

{
	
	char carattere;
	
	do {
		
		printf("Inserire un carattere: ");
		scanf("%c", &carattere);
		
		if ((carattere >= 'A') && (carattere <= 'z'))
		
		{
			
			if ((carattere >= 'A') && (carattere <= 'Z'))
			
			{
				
				carattere += 32;
				
				printf("%c\n", carattere);
				
			}
			
			else
			
			{
				
				carattere -= 32;
				
				printf("%c\n", carattere);
				
			}
			
		}
		
		getchar();
		
	} while (carattere != '*');
	
	return 0;
	
}
