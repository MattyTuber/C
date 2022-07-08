#include <stdio.h>

int main(){
	char carattere;
	
	printf("Inserire un carattere: ");
	scanf("%c", &carattere);
	
	if ((carattere >= 'a') && (carattere <= 'z')){		
		carattere = carattere - 32;
		printf("%c", carattere);
	}
	else if ((carattere >= 'A') && (carattere <= 'Z')){
		carattere = carattere + 32;
		printf("%c", carattere);	
	}
	else
		printf("*");
		
	return 0;	
}
