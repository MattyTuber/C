#include <stdio.h>

int main()

{
	
	int n, i, num, npari, ndisp, pari, disp;
	
	float mpari, mdisp;
	
	pari = 0;
	
	disp = 0;
	
	npari = 0;
	
	ndisp = 0;
	
	printf("Inserire il numero di ripetizioni: ");
	scanf("%d", &n);
	
	for (i=1; i<=n; i++)
	
	{
		
		printf("Inserire un numero: ");
		scanf("%d", &num);
		
		if (num % 2 == 0)
		
		{
			
			npari++;
			
			pari += num;
			
		}
		
		else
		
		{
			
			ndisp++;
			
			disp += num;
			
		}
		
	}
	
	mpari = pari / npari;
	
	mdisp = disp / ndisp;
	
	printf("La media dei valori pari e': %.2f", mpari);
	
	printf("La media dei valori dispari e': %.2f", mdisp);
	
	return 0;
	
}
