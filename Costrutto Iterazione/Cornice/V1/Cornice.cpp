#include <stdio.h>

int main() 

{
	
	int i, j, n, m;
	
	printf("Inserire il numero di righe: ");
	scanf("%d", &n);
	
	printf("Inserire il numero di colonne: ");
	scanf("%d", &m);
	
	for (i = 1; i <= m; i++)
	
		printf("*");
		
	printf("\n");
	
	for (i = 1; i <= n -2; i++)
	
	{
		
		printf("*");
		
		for (j=1; j <= m - 2; j++)
		
			printf(" ");
			
		printf("*\n");
		
	}
	
	for (i=1; i<=m; i++)
	
		printf("*");
		
	printf("\n");
	
}
