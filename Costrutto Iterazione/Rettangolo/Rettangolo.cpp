#include <stdio.h>

int main()

{
	
	int i, j, n, m;
	
	printf("Inserire il numero di righe: ");
	scanf("%d", &n);
	
	printf("Inserire il numero di colonne: ");
	scanf("%d", &m);
			
	for (i=1; i<=n; i++)
		
	{
		printf("\n");
			
		for (j=1; j<=m; j++)
			
		{
				
			printf("* ");
				
		}
			
	}	
		
	return 0;	
	
}

