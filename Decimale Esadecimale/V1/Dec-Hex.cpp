#include<stdio.h>
    int main()
    {
     long decimale, resto, dec;
     int i, j = 0;
     char esadecimale[100];
     
     printf("Inserire un numero decimale: ");
     scanf("%ld", &decimale);
     
     dec = decimale;
     
     while (dec != 0)
     {
     //Divido per sedici e memorizzo il resto nella variabile resto
	 resto = dec % 16;
	 //printf("%ld", resto);
	 if (resto < 10)
     esadecimale[j++] = 48 + resto;
     else
     esadecimale[j++] = 55 + resto;
     dec = dec / 16;
     }
     
     printf("\nEsadecimale:");
     
     //Convertitore da ASCII a carattere
     for (i = j; i >= 0; i--)
     printf("%c", esadecimale[i]);
     return 0;
    }
