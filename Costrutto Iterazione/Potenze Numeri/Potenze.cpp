/*Scrivere un programma che visualizzi il quadrato di una serie di numeri interi positivi,
usando il carattere “*” per segnalare la fine della serie.*/

#include <stdio.h>
#include <math.h>

main()

{
	
	char carattere;
	
	int n, p;
		
	do{
		
		printf("Inserire un numero: ");
		scanf("%d", &n);
		
		p = pow (n,2);
		
		printf("%d", p);
		
		printf("\nInserire un carattere: ");
		getchar();
		scanf("%c", &carattere);
		
	}while (carattere!='*');
		
	return 0;
	
}
