/****************************************************/
/*  												*/
/*Broglio Matteo 3CIN                               */
/*Programma per la conversione da Decimale ad un 	*/
/*unico numero binario.								*/
/*Il numero ottenuto non è una somma				*/
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
	  
	  	factor = factor / 10;

      	cifra = num / factor;
	  
	  	for (i = 3; i >= 0; i--){
        
			bin = cifra >> i;
			
    		if (bin & 1)
          
				printf("1");
        
			else
          
				printf("0");
      
		}

      	num = num % factor;

  	}

  	return 0;

}
