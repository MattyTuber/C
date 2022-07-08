#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int verifierInt (int val, int borneInf, int borneSup){ /*int  = valeur qui sera retourné */
	
	if(val >=  borneInf && val <= borneSup){
		
	return 1;
		
	}else{
		
	return 0;	
	}
	
}	 

int verifierFloat (float val, int borneInf, int borneSup){
	
	if(val >  borneInf && val <= borneSup){
		
	return 1;
		
	}else{
		
	return 0;	
	}
	
}
	
