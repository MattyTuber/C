#include <stdio.h>

int main()

{
	
	int o, m, s, secondi;
	
	printf("Inserisci il numero di ore: ");
	scanf("%d", &o);
	
	printf("Insterisci il numero di minuti: ");
	scanf("%d", &m);
	
	printf("Inserisci il numero di secondi: ");
	scanf("%d", &s);
	
	secondi = o * 3600 + m * 60 + s;
	
	printf("Il tempo totale e' di %d secondi", secondi);
	
	return 0;
	
}
