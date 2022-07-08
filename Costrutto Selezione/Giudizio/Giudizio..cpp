#include <stdio.h>

int main()

{
	
	int voto1, voto2, voto3;
	
	float media;
	
	printf("Inserire il primo voto: ");
	scanf("%d", &voto1);
	
	printf("Inserire il secondo voto: ");
	scanf("%d", &voto2);
	
	printf("Inserire il terzo voto: ");
	scanf("%d", &voto3);
	
	media = (voto1 + voto2 + voto3) / 3;
	
	if (media < 4.5)
	
		printf("Gravemente Insufficiente");
		
	else if ((media >= 4.5) && (media < 6))
	
		printf("Insufficiente");
		
	else if ((media >= 6) && (media < 7.5))
	
		printf("Sufficiente");
		
	else
	
		printf("Buono");			
	
	return 0;
}
