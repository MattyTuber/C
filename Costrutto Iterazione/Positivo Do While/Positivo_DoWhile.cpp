#include <stdio.h>

int main()

{
	
	int n;
	
	do {
		
		printf("Inserire un numero: ");
		scanf("%d", &n);
		
	} while (n<=0);
	
	printf("%d", n);
	
	return 0;
	
}
