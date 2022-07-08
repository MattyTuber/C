#include <stdio.h>
#include <math.h>

int main()

{
	
	int lato1;
	
	int lato2;
	
	int Q1;
	
	int Q2;
	
	float ipotenusa;
	
	printf("Inserisci il valore di un cateto:");
	scanf("%i", &lato1);
	
	printf("Inserisci il valore dell'altro cateto:");
	scanf("%i", &lato2);
	
	Q1 = pow(lato1,2);
	
	Q2 = pow(lato2,2);
	
	ipotenusa = sqrt(Q1 + Q2);
	
	printf("Ipotenusa: %f", ipotenusa);
	
	return 0;
	
}
