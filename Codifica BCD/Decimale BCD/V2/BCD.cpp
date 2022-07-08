/****************************************************/
/*  												*/
/*Broglio Matteo 3CIN                               */
/*Programma per la conversione da Decimale a BCD 	*/
/*  												*/
/****************************************************/

#include<stdio.h>

int main()
{

	int num, temp, factor, cifra, bin, i;

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
	  
	  	for (i = 4; i >= 0; i--){
        
			bin = cifra >> i;
			
    		if (bin & 1)
          
				printf("1 ");
        
			else
          
				printf("0 ");
      
		}

      	num = num % factor;

  	}

  	return 0;

}
