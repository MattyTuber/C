#include <stdio.h>

int main()
{
	
	int n, i, app, bin;
	
	printf("Inserire un numero decimale: ");
	scanf("%d", &n);
	
	printf("  ^\n");
	
	do{
		
		if (n % 2 == 0)
		
			printf("0 |\n");
			
		else
		
			printf("1 |\n");
			
		n = n / 2;	

	}while(n!=0);
	
}
