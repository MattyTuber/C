#include <stdio.h>

int main()
{
	int num;
	char car;
	
	//Prendo un input prima del char ed elimino l'enter
	printf("Inserire Numero --> ");
	scanf("%d", &num);
	//Elimino il carattere "rimanente" in memoria
	getchar();
	printf("Output Numero --> %d\n", num);
	
	printf("Inserire un carattere --> ");
	scanf("%c", &car);
	printf("Con getchar() --> %c", car);
	
}
