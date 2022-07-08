# include <stdio.h> 
# include <math.h> 

int main() 

{ 	

	int n, i;
	
	float radn;
	
	printf("Inserire un numero: ");
	scanf("%d", &n);
 
    while (n%2 == 0) 
    
	{ 
        
		printf("%d\n", 2); 
        
		n = n/2; 
    
	} 
  
    radn = sqrt(n);
    
	for (i = 3; i <= sqrt(n); i = i+2) 
    { 
    
        while (n%i == 0) 
        { 
            
			printf("%d\n", i); 
            
			n = n/i; 
        
		} 
    } 
  
    if (n > 2) 
        
		printf ("%d\n", n);
        
    return 0;
	    
} 
