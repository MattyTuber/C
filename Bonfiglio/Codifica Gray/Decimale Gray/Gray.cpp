/****************************************************/
/*  												*/
/*Broglio Matteo 3CIN                               */
/*Programma per la conversione da Decimale a Gray	*/
/*  												*/
/****************************************************/

#include <stdio.h>

int main()

{
	
	int num, temp, factor, cifra;
	
	printf("Inserire un numero --> ");
	scanf("%d", &num);
	
	temp = num;
	
	while(temp > 0){

    temp = temp / 10;

    factor = factor * 10;

	}
	
	while(factor > 1){
	    
		printf("\n\n");
		  
		factor = factor / 10;
	
	    cifra = num / factor;
	    
	    printf("%d\t", cifra);
		  
		switch (cifra){
			
			case 0:
					
				printf("0 0 0 0");
					
			break;
				
			case 1:
					
				printf("0 0 0 1");
					
			break;
				
			case 2:
					
				printf("0 0 1 1");
					
			break;
				
			case 3:
					
				printf("0 0 1 0");
					
			break;
				
			case 4:
				
				printf("0 1 1 0");
					
			break;
				
			case 5:
					
				printf("0 1 1 1");
					
			break;
				
			case 6:
					
				printf("0 1 0 1");
					
			break;
				
			case 7:
					
				printf("0 1 0 0");
					
			break;
				
			case 8:
					
				printf("1 1 0 0");
					
			break;
			
			case 9:
					
				printf("1 1 0 1");
					
			break;	
			
		}
		
		num = num % factor;
		
	}
					
}
