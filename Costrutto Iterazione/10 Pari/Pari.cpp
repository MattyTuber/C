#include <stdio.h>

int main()

{
	
	int n, i, app;
	
	printf("Inserire un numero: ");
	scanf("%d", &n);
	
	app = n;
	
	n = n % 2;
	
	if (n == 0)
	
		for (i=app+2; i<=app+20; i=i+2)
			
			printf("Il numero e': %d\n", i);
		
	else
	
		for (i=app+1; i<app+20; i=i+2)
		
			printf("Il numero e': %d\n", i);	
		
	return 0;
	
}
