#include <stdio.h>

int main()

{
	
	char risposta;
	
	printf("Ti sei divertito oggi? (S/N) ");
	scanf("%c", &risposta);
	
	if ((risposta == 'S') || (risposta == 's'))
	
		printf("Si, moltissimo!");
		
	else
		if ((risposta == 'N') || (risposta == 'n'))
	
			printf("No");
			
		else
		
			printf("La risposta non e' valida");
		
	return 0;	
	
}
