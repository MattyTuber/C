#include <stdio.h>

int main()

{
    int i, j, n, r, primo;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    printf("I fattori primi di %d sono: \n", n);

    for(i=1; i<=n; i++)
    {
        
        r = n % i;
		
		if(r==0)
        {
            
            primo = 1;
            
			for(j=2; j<=i/2; j++)
            {
                
				if(i%j==0)
                {
                    
					primo = 0;
                    
				}
            
			}

            if(primo==1)
            {
                
				printf("%d\n", i);
            
			}
        
		}
    
	}

    return 0;

}
