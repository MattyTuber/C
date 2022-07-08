#include <stdio.h>

int main()
{
	int num;
	char car;
	
	//Prendo un input prima del char
	printf("Inserire Numero --> ");
	scanf("%d", &num);
	printf("Output Numero --> %d\n", num);
	
	printf("Inserire un carattere --> ");
	//*c risulta non funzionare
	scanf("%*c", &car);
	printf("Con *c --> %c", car);
	
}
