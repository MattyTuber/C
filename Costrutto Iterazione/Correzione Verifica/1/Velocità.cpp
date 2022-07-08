#include <stdio.h>

int main()

{
	
	int i, n, v, sup;
	
	sup = 0;
	
	printf("Inserire il numero di veicoli: ");
	scanf("%d", &n);
	
	for (i=1; i<=n; i++)
	
	{
		
		printf("Inserire una velocita': ");
		scanf("%d", &v);
		
		if (v > 120)
		
		sup++;
		
	}
	
	printf("%d veicoli hanno superato la velocita' massima", sup);
	
	return 0;
	
}
