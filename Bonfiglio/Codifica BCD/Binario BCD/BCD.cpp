/****************************************************/
/*  												*/
/*Broglio Matteo 3CIN                               */
/*Programma per la conversione da Binario a BCD 	*/
/*  												*/
/****************************************************/

#include<stdio.h>

int main()
{

	int decimale, binario, rem, base, temp, factor, cifra, bin, i;
	
	decimale = 0;
	
	factor = 1;

  	printf("Inserire un numero binario --> ");

    scanf("%d", &binario);

    while (binario > 0){

        rem = binario % 10;

        decimale += rem * base;

        binario = binario / 10 ;

        base = base * 2;

    }

  	temp = decimale;

  	while(temp > 0){

      	temp = temp / 10;

      	factor = factor * 10;

  	}

  	while(factor > 1){
     
      	printf("\n\n");
	  
	  	factor = factor / 10;

      	cifra = decimale / factor;
	  
	  	printf("%d\t", cifra);
	  
	  	for (i = 4; i >= 0; i--)
		{
        
			bin = cifra >> i;
			
    		if (bin & 1)
          
				printf("1 ");
        
			else
          
				printf("0 ");
      
		}

      	decimale = decimale % factor;

  	}

  	return 0;

}
