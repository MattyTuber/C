#include <stdio.h>

int main(){
	int num;
	
	printf("Inserire un numero --> ");
	scanf("%d", &num);
	
	if (num >= 0){ //10
		printf("Il numero %c positivo --> %d", 138, num);
	}
	else { //-10 (num < 0)
		num = num * 2;
		
		printf("Il numero %c negativo --> %d", 138, num);
	}
	
	printf ("\nSto terminando...");
	
	return 0;
}
