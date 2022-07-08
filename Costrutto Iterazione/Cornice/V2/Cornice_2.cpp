#include <stdio.h>

int main() 

{
	
	int i, j, n, m;
	
	printf("Inserire il numero di righe: ");
	scanf("%d", &n);
	
	printf("Inserire il numero di colonne: ");
	scanf("%d", &m);
	
	for(i = 0; i < n; i++)
	
	{
    
	for(j = 0; j < m; j++)
    
	{
        
		if(i == 0 || i == n-1)
        
		{
            
			printf("*");
        
		}
        
		else if(j == 0 || j == m-1)
       
	    {
           
		    printf("*");
       
	    }
       
	    else
        
		{
           
		    printf(" ");
       
	    }
   
    }
    
	printf("\n");
	
	}
	
	return 0;
	
}
