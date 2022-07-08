#include <stdio.h>

int main()

{
	
	int classe;
	
	char sezione;
	
	printf("Inserire la sezione: ");
	scanf("%c", &sezione);
	
	printf("Inserire la calsse: ");
	scanf("%d", &classe);
	
	if (classe == 1)
	
		printf("Visiata al museo egizio di Torino");
		
	else if ((classe == 2) && (sezione == 'A'))
	
		printf("Visita al Duomo di Milano");
		
	else if (classe == 2)
	
		printf("Visita al Castello Sforzesco di Milano");
		
	else if (classe == 3)
	
		printf("Visita alle Gallerie degli Uffizzi di Firenze");
		
	else if ((classe == 4) && (sezione == 'B'))
	
		printf("Visita al Colosseo a Roma");
		
	else if ((classe == 4) && (sezione == 'C'))
	
		printf("Visita al Pantheon a Roma");
		
	else if (classe == 4)
	
		printf("Visita ai Musei Vaticani");
		
	else if (classe == 5)
	
		printf("Visita al Cern di Ginevra");
		
	else
	
		printf("Classe o Sezione non valida");
		
	return 0;							
	
}
