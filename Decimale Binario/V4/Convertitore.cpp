// Broglio Matteo
// Conversione di un numero da decimale a binario e viceversa

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define DIM 32	

void visualizza();	
void binario();		
void decimale();	

int i,j;	
int vet[DIM];	
int b;		
int d;	
int dec;	
int res;

int main()
{

	for(i=0;i<DIM;i++)
	{
		vet[i]=0;
	}

	printf("Numero decimale: "); scanf("%d",&b);

	binario();

	visualizza();

	printf("Numero binario: "); scanf("%d",&d);

	decimale();

	printf("%d\n",dec);
	getchar();
}


void binario()
{
	i=0;		
	while(i<DIM)
	{
		if((b%2)==0)
		{
			vet[DIM-1-i]=0;
		} else {
			vet[DIM-1-i]=1;
		}
		b=b/2;	
		++i;	
	}
}


void visualizza()
{
	for(j=0;j<DIM;j++)
	{
		printf("%d ",vet[j]);
	}
	printf("\n\n");
}


void decimale()
{
	
	for(i=0;d > 0;i++)
	{
		res=d%10;		
		d=d/10; 		
		dec=dec+res*pow(2,i);	
	}
	getchar();
}

