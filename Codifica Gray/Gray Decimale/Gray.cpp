/****************************************************/
/*  												*/
/*Broglio Matteo 3CIN                               */
/*Programma per la conversione da Gray a Decimale   */
/*  												*/
/****************************************************/

#include <stdio.h>

int main()

{
	
	int num, i, z, a[32];
	
	char risp;
	
	int n = 0;

	for (i=0; i <= n; i++)
	{
		
		printf("Inserire un numero in codice Gray --> ");
		scanf("%d", &a[i]);
		
		printf("Vuoi inserire altri valori? S/N ");
		getchar();
		scanf("%c", &risp);
		
		if (risp == 'S')
		
			n++;
		
	}

	for (z=0; z <= n; z++)
	{
	
	switch (a[z])	
	{
			
		case 0000:
				
			printf("0");
				
		break;
			
		case 0001:
				
			printf("1");
				
		break;
			
		case 11:
				
			printf("2");
				
		break;
			
		case 10:
				
			printf("3");
				
		break;
			
		case 110:
			
			printf("4");
				
		break;
			
		case 111:
				
			printf("5");
				
		break;
			
		case 101:
				
			printf("6");
				
		break;
			
		case 100:
				
			printf("7");
				
		break;
			
		case 1100:
				
			printf("8");
				
		break;
		
		case 1101:
				
			printf("9");
				
		break;
			
		}	
	
	}
				
}
