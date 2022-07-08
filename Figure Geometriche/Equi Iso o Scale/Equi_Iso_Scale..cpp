#include <stdio.h>

int main()

{
	
	int l1, l2, l3;
	
	printf("Inserire il valore di l1: ");
	scanf("%d", &l1);
	
	printf("Inserire il valore di l2: ");
	scanf("%d", &l2);
	
	printf("Inserire il valore di l3: ");
	scanf("%d", &l3);
	
	if (l1 == l2)
	
		if (l2 == l3)
		
			printf("Il triangolo e' equilatero");
			
		else
		
			printf("Il triangolo e' isoscele");
			
	else
	
		if (l2 == l3)
		
			printf("Il triangolo e' isoscele");
			
		else	
		
			if (l1 == l3)
		
				printf("Il triangolo e' isoscele");
			
			else
		
				printf("Il triangolo e' scaleno");
			
	return 0;						
	
}
