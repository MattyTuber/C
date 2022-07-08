#include <stdio.h>

int main()

{
	
	int eta;
	
	printf("Inserire un eta': ");
	scanf("%d", &eta);
	
	if (eta >= 18)
	
	{
		
		printf("Maggiorenne");
		
		printf("\n%d", eta);
	
	}
	
	else
	
	{
		
		printf("Minorenne");
		
		printf("\n%d", eta);
	
	}
	
	return 0;		
	
}
