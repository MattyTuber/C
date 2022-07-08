#include <stdio.h>

int main()

{
	
	int i, j;
	
	int n;
	
	printf("Inserire un numero: ");
	scanf("%d", &n);
	
	if (n <= 79)	
		
		{
			
			for (i=0; i<n; i++)
		
		{
			
			for (j=0; j<i; j++)
			
			{
				
				printf(" ");
				
			}
			
			printf(" * \n");
			
		}
			
		}	
		
	return 0;	
	
}
