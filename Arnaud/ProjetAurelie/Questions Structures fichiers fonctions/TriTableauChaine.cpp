#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "");
	
	
	/*Les variables*/
	char *tableau[] = {"Thomas", "Kevin", "Cassandra" , "Guillaume", "Mike", "Aurélie", "Hugo", "Sarah", "Fabian", "Alexis", "Dorian", "Nathan", "Dylan"}; 
    int	i ; 
	int j ; 
	char *temp ; 
	
	
	printf("\nLe tableau en mémoire: ");
	for (i=0; i<12; i++) printf("%s | ", tableau[i]);
	
	
	
	for (i=0;i<12;i++){
			for (j=0;j<12;j++){
				
				if(strcmp(tableau[i], tableau[j]) < 0){ 
					
					 temp=tableau[i];
					 tableau[i] = tableau[j] ;
					 tableau[j] = temp; 
				}
				
			}

}
	/*On affiche le tableau trié*/
	printf("\nLe tableau trié:       ");
	for (i=0; i<12; i++) printf("%s | ", tableau[i]);
	
	return 0;
}
