#include <stdio.h>

int main()
{
	int num;
	char car;
	
	//Prendo un input prima del char
	printf("Inserire Numero --> ");
	scanf("%d", &num);
	printf("Output Numero --> %d\n", num);
	
	//Il Carriage Return (invio) rimane in memoria e viene utilizzato nella scanf() seguente
	printf("Inserire un carattere --> ");
	scanf("%c", &car);
	printf("Con input normale --> %c", car);
	
}
