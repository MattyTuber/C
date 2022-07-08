#include <stdio.h>
#include <math.h>

int main()

{
	
	int i, p;
	
	for (i=1; i<=24; i++)
	
	{
		
		p = pow (i, 2);
		
		printf("Quadrato %d: %d\n", i, p);
			
	}
		
	return 0;
	
}
