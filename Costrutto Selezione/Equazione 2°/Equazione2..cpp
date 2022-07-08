#include <stdio.h>
#include <math.h>

int main()

{
	
	float a, b, c, Q, R, det, X1, X2;
	
	printf("Inserisci il valore di a: ");
	scanf("%f", &a);
	
	printf("Inserisci il valore di b: ");
	scanf("%f", &b);
	
	printf("Inserisci il valore di c: ");
	scanf("%f", &c);
	
	Q = pow (b, 2);
	
	det = Q - 4 * a * c;
	
	if ((det >= 0) && (a != 0))
	
	{
			
		R = sqrt (det);
			
		X1 = (b + R) / (2 * a);
			
		X2 = (b - R) / (2 * a);
			
		printf("X1 vale %f", X1);
		
		printf("\nX2 vale %f", X2);
			
			if (X1 == X2)
		
			{
						
				printf("\nCi sono due soluzioni reali coincidenti");
						
			}
			
			else
				
			{
					
				printf("\nCi sono due soluzioni reali distinte");
					
			}
		
	}
			
	else
	
		printf("L' equazione non ammette soluzioni reali");
		
	return 0;	
					
}
