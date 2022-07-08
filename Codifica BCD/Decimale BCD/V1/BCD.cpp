#include<stdio.h>

int main()
{
    int num, i, mod, bin;
    
    printf("Inserire un numero --> ");
    scanf("%d",&num);
    
    
	while(num > 0)
    {
        
		mod = num % 10;
		
		printf("%d\t", mod);
		
		for (i = 4; i >= 0; i--)
    	{
        
			bin = mod >> i;
			
    		if (bin & 1)
          
				printf("1 ");
        
			else
          
				printf("0 ");
      
		}
		
		printf("\n\n");
		
		num = num / 10; 
    
	}
	
	
    
    return 0;
}
