#include <stdio.h>
#include <math.h>

#define PI 3.1415

int main()

{
	
	float l, aquadrato, r, acerchio, altezza, aequilatero;
	float q1, q2, q3;
	
	printf("Inserisci un valore: ");
	scanf("%f", &l);
	
	aquadrato = pow(l, 2);
	
	r = l / 2;
	
	q1 = pow(r, 2);
	
	acerchio = PI * q1;
	
	q2 = pow(l, 2);
	
	q3 = pow(l / 2, 2);
	
	altezza = sqrt(q2 - q3);
	
	aequilatero = l * altezza / 2;
	
	printf("L'area del quadrato e' di %f m2", aquadrato);
	
	printf("\nL'area del cerchio e' di %f m2", acerchio);
	
	printf("\nL'area del triangolo equilatero e' di %f m2", aequilatero);
	
	return 0;
		
}
