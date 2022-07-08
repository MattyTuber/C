#include <stdio.h>

int main()

{
	
	int n1, n2, n3;
	
	printf("Inserire il primo numero: ");
	scanf("%d", &n1);
	
	printf("Inserire il secondo numero: ");
	scanf("%d", &n2);
	
	printf("Inserire il terzo numero: ");
	scanf("%d", &n3);
	
	if ((n1 > n2) && (n1 > n3))
	
	{
		
		if (n2 > n3)
		
			printf("%d, %d, %d", n1, n2, n3);
			
		else
		
			printf("%d, %d, %d", n1, n3, n2);
		
	}
	
	else if ((n2 > n1) && (n2 > n3))
	
	{
		
		if (n3 > n1)
		
			printf("%d, %d, %d", n2, n3, n1);
			
		else
		
			printf("%d, %d, %d", n2, n1, n3);	
		
	}
	
	else if (n2 > n1)
	
		printf("%d, %d, %d", n3, n2, n1);
		
	else
	
		printf("%d, %d, %d", n3, n1, n2);
		
	return 0;	
	
}
