#include <stdio.h>

int main()

{
	
	int pezzi, importo;
	
	printf("Inserire il numero di pezzi: ");
	scanf("%d", &pezzi);
	
	if (pezzi >= 10)
	
		importo = pezzi * 1000;
		
	else if (pezzi <= 50)
	
		importo = pezzi * 800;
		
	else
	
		importo = pezzi * 500;
	
	printf("L' importo e' di %d lire", importo);
	
	return 0;			
	
}
