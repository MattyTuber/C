#include <stdio.h>

int main()
{
	char car;
	
	//In questo caso non risultano esserci problemi siccome la variabile char riceve per prima l'input nel programma
	printf("Inserire un carattere --> ");
	scanf("%c", &car);
	printf("Con input normale --> %c", car);
	
}
