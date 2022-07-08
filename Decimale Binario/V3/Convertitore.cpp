#include <stdio.h>

int main()

{
	
	int a[31], n, i;
	
	printf("Inserire un numero decimale: ");
	scanf("%d", &n);
	
	do {
		
		a[i] = n % 2; //Salvo in un Array il resto della divisione che sarà sempre o 0 o 1
		
		n = n / 2;
		
		i++;
		
	} while (n != 0);
	
	for (i=i-1; i>=0; i--) //Stampo le cifre salvate nell'Array in senso opposto in modo da ottenere il numero binario
	
	{
		
		printf("%d ", a[i]);
		
	}
	
	return 0;
	
}
