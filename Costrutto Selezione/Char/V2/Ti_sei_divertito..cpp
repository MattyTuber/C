#include <stdio.h>

int main()

{
	
	char risposta;
	
	printf("Ti sei divertito oggi? (S/N) ");
	scanf("%c", &risposta);
	
	if ((risposta == 'S') || (risposta == 's'))
	
		printf("Si, moltissimo!");
		
	else
	
		printf("No");
		
	return 0;	
	
}
