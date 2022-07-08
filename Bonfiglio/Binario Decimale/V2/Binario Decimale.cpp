#include <stdio.h>

int main()

{

    int  num, binario, decimale = 0, base = 1, rem;

    printf("Inserire un numero binario --> ");

    scanf("%d", &num);

    binario = num;

    while (num > 0)

    {

        rem = num % 10;

        decimale = decimale + rem * base;

        num = num / 10 ;

        base = base * 2;

    }
    
	printf("Il numero in decimale %c --> %d", 138, decimale);

}
